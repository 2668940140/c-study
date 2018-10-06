
#include <iostream>
#include <climits> //包含一些限制常量

int main() {
	using namespace std;
	short n_short = SHRT_MAX;
	int n_int = INT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	unsigned short un_short = USHRT_MAX;
	unsigned int un_int = UINT_MAX;
	unsigned long un_long = ULONG_MAX;
	unsigned long long un_llong = ULLONG_MAX;

	cout << "Short is " << sizeof n_short << " bytes" << endl;
	cout << "Int is " << sizeof n_int << " bytes" << endl;
	cout << "Long is " << sizeof n_long << " bytes" << endl;
	cout << "Long Long is " << sizeof n_llong << " bytes" << endl;
	cout << "Unsigned short is " << sizeof n_short << " bytes" << endl;
	cout << "Unsigned int is " << sizeof n_int << " bytes" << endl;
	cout << "Unsigned long is " << sizeof n_long << " bytes" << endl;
	cout << "Unsigned long long is " << sizeof n_llong << " bytes" << endl << endl;

	cout << "Maximum values:" << endl;
	cout << "Short is " << n_short << endl;
	cout << "Int is " << n_int << endl;
	cout << "Long is " << n_long << endl;
	cout << "Long Long is " << n_llong << endl;
	cout << "Unsigned short is " << un_short << endl;
	cout << "Unsigned int is " << un_int << endl;
	cout << "Unsigned long is " << un_long << endl;
	cout << "Unsigned long long is " << un_llong << endl << endl;

	cout << "Minimum values:"<<endl;
	cout << "Short is " << SHRT_MIN << endl;
	cout << "Int is " << INT_MIN << endl;
	cout << "Long is " << LONG_MIN << endl;
	cout << "Long Long is " << LLONG_MIN << endl << endl;

	cout << "Conversion:" << endl;
	cout << "1 Byte = 8 Bits"<< endl;
	cout << "1 KB = 1024 Bytes" << endl;
	cout << "1 MB = 1024 KB" << endl;
	cout << "1 GB = 1024 MB" << endl;

	system("pause");
}
