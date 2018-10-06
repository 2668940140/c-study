
#include <iostream>

int main() {
	using namespace std;

	int a, b;
	cout << "Please type in two numbers.\na=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "a is " << a << " and the adress of it is " << &a << "." << endl;
	cout << "b is " << b << " and the adress of it is " << &b << ".";

	cin.get();
	cin.get();
}
