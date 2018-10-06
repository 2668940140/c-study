#include <iostream>

int main() {
	using namespace std;
	enum colortype { red, blue, yellow, green, black, white }; //第一个量为零，此后依次递增，相当于符号常量
	colortype color = white; //white相当于5，但5不能赋值给enum类
	cout << color << endl;
	color = red;
	cout << color;
	cin.get();
}
