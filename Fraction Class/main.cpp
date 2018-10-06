#include "Fraction.h"
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	long a, b;
	cin >> a;
	cin >> b;
	fracT tempa=tofracT(a), tempb=tofracT(b);
	fracT temp = tempa / tempb;
	string str = fracostr(temp);
	cout << str;
	cin.get();
	cin.get();
	return 0;
}
