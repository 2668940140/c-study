#include "Fraction.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


long sim(long a, long b)  //取最大公因数
{
	return a%b == 0 ? b : sim(b, a%b);
}

void simple(fracT *frac) {     //化简函数
	if (frac->son != 0)
	{
		long a = frac->son;
		long b = frac->mother;
		long c = sim(a, b);
		frac->son = a / c;
		frac->mother = b / c;
	}
	else
	{
		frac->son = 0;
		frac->mother = 1;
	}
}

fracT::fracT()
{
	son = 0;
	mother = 1;
	positive = true;
}

fracT::fracT(unsigned long a, unsigned long b, bool c)
{
	if (b != 0)
	{
		son = a;
		mother = b;
		positive = c;
		simple(this);
	}
	else
	{
		std::cout << "Wrong.Plese check out your expression.";
	}
}

long fracT::getson()
{
	return son;
}

long fracT::getmother()
{
	return mother;
}

bool fracT::getpositive()
{
	return positive;
}

void fracT::resetfrac(unsigned long a, unsigned long b, bool c)
{
	if (b != 0)
	{
		son = a;
		mother = b;
		positive = c;
		simple(this);
	}
	else
	{
		std::cout << "Wrong.Plese check out your expression.";
	}
}

void fracT::resetfrac(unsigned long a, unsigned long b)
{
	if (b != 0)
	{
		son = a;
		mother = b;
		simple(this);
	}
	else
	{
		std::cout << "Wrong.Plese check out your expression.";
	}
}

fracT fracT::operator+(fracT frac) const
{
	fracT temp;
	if (positive == frac.positive) {
		temp.resetfrac(son*frac.mother + frac.son*mother, mother*frac.mother, positive);
	}
	else if (son*frac.mother >= frac.son*mother)
	{
		temp.resetfrac(son*frac.mother - frac.son*mother, mother*frac.mother, positive);
	}
	else
	{
		temp.resetfrac(frac.son*mother - son*frac.mother, mother*frac.mother, frac.positive);
	}
	return temp;
}

fracT fracT::operator-(fracT frac) const
{
	if (frac.positive == true)
	{
		frac.positive = false;
	}
	else
	{
		frac.positive = true;
	}
	return (*this + frac);
}

fracT fracT::operator*(fracT frac) const
{
	fracT temp;
	temp.resetfrac(son*frac.son, mother*frac.mother);
	if ((positive == true && frac.positive == true) || (positive == false && frac.positive == false))
	{
		temp.positive = true;
	}
	else
	{
		temp.positive = false;
	}
	return temp;

}

fracT fracT::operator/(fracT frac) const
{
	if (frac.son != 0)
	{
		long temp = frac.mother;
		frac.mother = frac.son;
		frac.son = temp;
		return (*this*frac);
	}
	else
	{
		std::cout << "Wrong.Plese check out your expression.";
		fracT temp(0, 1, positive);
		return temp;
	}

}

void fracT::operator=(fracT frac)
{
	this->son = frac.son;
	this->mother = frac.mother;
	this->positive = frac.positive;
}

bool fracT::operator==(fracT frac) const
{
	if (son == frac.son&&mother == frac.mother&&positive == frac.positive)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool fracT::operator!=(fracT frac) const
{
	if (son == frac.son&&mother == frac.mother&&positive == frac.positive)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool fracT::operator>(fracT frac) const
{
	fracT temp;
	temp = *this - frac;
	if (temp.positive == true && temp.son != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool fracT::operator<(fracT frac) const
{
	fracT temp;
	temp = frac - *this;
	if (temp.positive == true && temp.son != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool fracT::operator>=(fracT frac) const
{
	fracT temp;
	temp = *this - frac;
	if (temp.positive == true)
	{
		return true;
	}
	else
	{
		return false;
	};
}

bool fracT::operator<=(fracT frac) const
{
	fracT temp;
	temp = frac - *this;
	if (temp.positive == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

fracT::operator double()
{
	if (positive == true)
	{
		return son / mother;
	}
	else
	{
		return -long(son / mother);
	}
}

//fracT tofracT(double n)
//{
//	int after = n.length();
//	long a = (long)(n * (10 ^ after)), b = 10 ^ after;
//	fracT temp;
//	if (a >= 0)
//	{
//		temp.resetfrac(a, b, true);
//	}
//	else
//	{
//		temp.resetfrac(-a, b, false);
//	}
//	return temp;
//}


fracT tofracT(long n)
{
	fracT temp;
	if (n >= 0)
	{
		temp.resetfrac(n, 1, true);
	}
	else
	{
		temp.resetfrac(-n, 1, false);
	}
	return temp;
}

string ltos(long l)
{
	ostringstream os;
	os << l;
	string result;
	istringstream is(os.str());
	is >> result;
	return result;

}

string fracostr(fracT frac)
{
	string str = "";
	if (frac.getpositive() == false)
	{
		str = "-";
	}
	if (frac.getmother()!=1)
	{
		str = str + ltos(frac.getson()) + "/" + ltos(frac.getmother());
		return str;
	} 
	else
	{
		str = str + ltos(frac.getson());
		return str;
	}

}