
#include <iostream>
#include <string>

struct personalinformation //������Ϣ��������
{
	std::string name; //the name
	int age; //the age
};

int main() {
	using namespace std;
	cout << "This is a procedure for entering personnel information.\n"
		"Enter to the next one.\n";
	cout << "How many people are there?(0<x<101)\n";
	int people;
	cin >> people;
	cin.get();
	if (people > 0 & people < 101)
	{
		string str;
		personalinformation info[100];
		int times = 0;
		while (times != people)
		{
			cout << "Name:";
			getline(cin, str);  //string��ʹ�õ�getline����iostream���Ӻ���
			info[times].name = str;
			cout << "Age:";
			cin >> info[times].age;
			cin.get();
			times = times + 1;
		}
		for (int i = 0; i < times; i++) {
			cout << info[i].name << " is " << info[i].age << " years old.\n";
		}
		cin.get();
	}
	return 0;
}
