#include <iostream>

int main() {
	using namespace std;

	cout << "You give me a number and I will put it in hex and oct.\n";
	long int number;
	cin >> number;
	cout << "It is " << hex << number << " in hex.\n";  //hex��cout�Դ������16���Ƶı�־
	cout << "It is " << oct << number << " in oct.\n";  //oct��cout�Դ������8���Ƶı�־

	system("pause");
	return 0;
}
