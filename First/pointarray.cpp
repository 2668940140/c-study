
#include <iostream>
#include <string>

struct personalinformation //个人信息数据类型
{
std::string name; //the name
int age; //the age
};

int main() {
using namespace std;
cout << "This is a procedure for entering personnel information.\n"
"Enter to the next one.\n";
cout << "How many people are there?\n";
int people;
cin >> people;

personalinformation * pinfo = new personalinformation[people];

for (int i = 0; i < people; i++)
{
	cout << "name:";
	cin.get();
	getline(cin, pinfo[i].name);
	cout << "age:";
	cin >> pinfo[i].age;
}

for (int i = 0; i < people; i++) {
	cout << pinfo[i].name << " is " << pinfo[i].age << " years old.\n";
}

delete[] pinfo;
cin.get();
cin.get();
return 0;
}
