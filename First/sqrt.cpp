#include <iostream>
#include <cmath>
int main() {
	using namespace std;
	cout << "������ֱ��������ABC��ֱ�Ǳ߳���\n";
	double a, b, c;
	cout << "a=?\n";
	cin >> a;
	cout << "b=?\n";
	cin >> b;
	c = sqrt(a*a + b*b);
	cout << "c = " << c << endl;
	system("pause");
	return 0;
}

