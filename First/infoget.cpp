
#include <iostream>
int main() {
	using namespace std;
	int carrots;
	cout << "How many carrots do you have?\n";
	cin >> carrots;
	carrots = carrots + 2;
	cout << "There are two more.\n";
	cout << "Now you have " << carrots << " carrots.";
	cout << endl;
	system("pause");
		return 0;
}
