
#include <iostream>

int main() {
	using namespace std;
	int number;
	int *adnumber = &number;  //int��ʾadnumberָ��int����
	cout << "Type in a number.";
	cin >> number;
	cout << "The address of " << number << " is " << adnumber << ".\n";
	cout << "The value of " << &number << " is " << *adnumber << ".\n";
	cin.get();
	cin.get();
	return 0;
}
