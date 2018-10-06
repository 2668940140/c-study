#include <iostream>
#include <cmath>
int main() {
	using namespace std;
	cout << "请输入直角三角形ABC两直角边长。\n";
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

