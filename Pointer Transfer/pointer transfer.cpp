#include <iostream>
#include <string>

using namespace std;
void change(string * pstr);

int main() {
	cout << "Type in a word.\n";
	string * str = new string;
	getline(cin,*str);
	change(str);
	cout << *str;
	delete str;
	cin.get();
	return 0;
}

void change(string * pstr) {
	char temp;
	int a = (*pstr).length() - 1;
	for (int b = 0; b < a; b++, a--)
	{
		temp = (*pstr)[a];
		(*pstr)[a] = (*pstr)[b];
		(*pstr)[b] = temp;
	}
}
