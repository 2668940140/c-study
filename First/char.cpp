#include <iostream>

int main() {
	using namespace std;
	char ch;  //char可以进行整数运算,它做整型一般可表示-128到127

	cout << "Say a letter.\n";
	cin >> ch; //char只能表示ASCII编码中的一个字符233
	int n = ch;
	cout << "You said '";
	cout.put(n);  //cout.put这个成员函数将编码转换为字符输出，这里是多此一举
	cout << "'." << endl;
	cout << "It is " << n << " in ASCII code." << endl;

	system("pause");
	return 0;
}
