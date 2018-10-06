
#include <iostream>

int main() {
	union MyUnion  //共用体只能储存int,double,long且只能同时储存1个数据
	{
		int a;
		double b;
	}number;
	number.a = 324;
	std::cout << number.a<<std::endl;
	number.b = 32.45;
	std::cout << number.b << std::endl;
	std::cout << number.a << std::endl;
	std::cin.get();
}
