#ifndef FRACTION_H_
#define FRACTION_H_
#include <string>
#include <iostream>

class fracT
{
	friend void simple(fracT *frac);  //������Ϊ��Ԫ

public:
	fracT();
	fracT(unsigned long a, unsigned long b, bool c);  //��ʼ��
	void resetfrac(unsigned long a, unsigned long b, bool c);
	void resetfrac(unsigned long a, unsigned long b);  //����
	long getson();
	long getmother();
	bool getpositive();  //���ⴰ��
	fracT operator+(fracT frac) const;
	fracT operator-(fracT frac) const;
	fracT operator*(fracT frac) const;
	fracT operator/(fracT frac) const;  //����
	bool operator==(fracT frac) const;
	bool operator!=(fracT frac) const;
	bool operator>(fracT frac) const;
	bool operator<(fracT frac) const;
	bool operator>=(fracT frac) const;
	bool operator<=(fracT frac) const;  //�ж�
	void operator=(fracT frac);  //��ֵ
	operator double();     //��ʽת��

	
private:
	unsigned long son;
	unsigned long mother;
	bool positive;
};

//fracT tofracT(double n);   ---�����
fracT tofracT(long n);
std::string fracostr(fracT frac); //��ʽת��
#endif

