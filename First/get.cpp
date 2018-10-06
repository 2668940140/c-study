#include <iostream>

int main() {
	using namespace std;
	cout << "What's you name?\n";
	char name[30];
	cin.getline(name,30); 
	//cin在遇到空格，换行符等时判断结束，如果输入时有空格会出现问题。 cin.get(name,30)会把换行符留在输入里。详见primer 4.2
	cout << "Hi " << name << ",when was your house built?(year)\n";
	long time;
	cin >> time;
	cin.get();
	cout << "Where is your house built in?\n";
	char place[50];
	cin.get(place, 50).get(); //第二个get可读取输入中剩余的换行符
	cout << name << "'s house was built in " << time << " in " << place << ".\npress and key to continue.";
	cin.get(); //结束方式比system("pause"); 安全
	return 0;
}
