#include <iostream>

int main() {
	using namespace std;

	cout << "You give me a number and I will put it in hex and oct.\n";
	long int number;
	cin >> number;
	cout << "It is " << hex << number << " in hex.\n";  //hex是cout自带的输出16进制的标志
	cout << "It is " << oct << number << " in oct.\n";  //oct是cout自带的输出8进制的标志

	system("pause");
	return 0;
}
