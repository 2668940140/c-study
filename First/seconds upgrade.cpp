
#include <iostream>

int main() {
	using namespace std;
	cout << "Please enter the number of seconds.\n";
	long seconds;
	cin >> seconds;
	long days, hours, minutes, left;

	left = seconds - seconds % 60;
	seconds = seconds - left;
	minutes = left / 60;
	left = minutes - minutes % 60;
	minutes = minutes - left;
	hours = left / 60;
	left = hours - hours % 24;
	hours = hours - left;
	days = left / 24;

	cout << "It's " << days << " days," << hours << " hours," << minutes << " minutes and " << seconds << " seconds.\n";
	system("pause");
	return 0;
}
