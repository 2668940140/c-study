#include <iostream>

int main() {
	using namespace std;
	enum colortype { red, blue, yellow, green, black, white }; //��һ����Ϊ�㣬�˺����ε������൱�ڷ��ų���
	colortype color = white; //white�൱��5����5���ܸ�ֵ��enum��
	cout << color << endl;
	color = red;
	cout << color;
	cin.get();
}
