#include <iostream>

int main() {
	using namespace std;
	char ch;  //char���Խ�����������,��������һ��ɱ�ʾ-128��127

	cout << "Say a letter.\n";
	cin >> ch; //charֻ�ܱ�ʾASCII�����е�һ���ַ�233
	int n = ch;
	cout << "You said '";
	cout.put(n);  //cout.put�����Ա����������ת��Ϊ�ַ�����������Ƕ��һ��
	cout << "'." << endl;
	cout << "It is " << n << " in ASCII code." << endl;

	system("pause");
	return 0;
}
