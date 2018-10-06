#ifndef FRACTION_H_
#define FRACTION_H_
#include <string>
#include <iostream>

class fracT
{
	friend void simple(fracT *frac);  //化简函数为友元

public:
	fracT();
	fracT(unsigned long a, unsigned long b, bool c);  //初始化
	void resetfrac(unsigned long a, unsigned long b, bool c);
	void resetfrac(unsigned long a, unsigned long b);  //设置
	long getson();
	long getmother();
	bool getpositive();  //对外窗口
	fracT operator+(fracT frac) const;
	fracT operator-(fracT frac) const;
	fracT operator*(fracT frac) const;
	fracT operator/(fracT frac) const;  //计算
	bool operator==(fracT frac) const;
	bool operator!=(fracT frac) const;
	bool operator>(fracT frac) const;
	bool operator<(fracT frac) const;
	bool operator>=(fracT frac) const;
	bool operator<=(fracT frac) const;  //判断
	void operator=(fracT frac);  //赋值
	operator double();     //隐式转换

	
private:
	unsigned long son;
	unsigned long mother;
	bool positive;
};

//fracT tofracT(double n);   ---待解决
fracT tofracT(long n);
std::string fracostr(fracT frac); //显式转换
#endif

