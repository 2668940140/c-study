#include <iostream>

int main() {
	using namespace std;
	cout << "What's you name?\n";
	char name[30];
	cin.getline(name,30); 
	//cin�������ո񣬻��з���ʱ�жϽ������������ʱ�пո��������⡣ cin.get(name,30)��ѻ��з�������������primer 4.2
	cout << "Hi " << name << ",when was your house built?(year)\n";
	long time;
	cin >> time;
	cin.get();
	cout << "Where is your house built in?\n";
	char place[50];
	cin.get(place, 50).get(); //�ڶ���get�ɶ�ȡ������ʣ��Ļ��з�
	cout << name << "'s house was built in " << time << " in " << place << ".\npress and key to continue.";
	cin.get(); //������ʽ��system("pause"); ��ȫ
	return 0;
}
