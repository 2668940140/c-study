
#include <iostream>

long main() {
	using namespace std;
	long n;

	cout << "Type a number.\n";
	cin >> n;
	long number = n;
	cout << "Please wait.\n";

	long i = 2;
	while (n != 1)
	{
		if (n%i == 0)
		{
			if (i < n)
			{
				n = n / i;
				cout << i << "*";
				i = 2;
			}
			else
			{
				n = 1;
				cout << i << "=" << number << endl;
			}
		}
		else
		{
			i++;
		}
	}

	system("pause");
	return number;
}
