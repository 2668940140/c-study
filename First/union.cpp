
#include <iostream>

int main() {
	union MyUnion  //������ֻ�ܴ���int,double,long��ֻ��ͬʱ����1������
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
