/*
�������ʾģ��Ĳ��ɹ���
���򣺳ɹ�������ʧ�ܼ��ʾ�Ϊ1/2���ɹ�����Ͷע��Ǯ*2,ʧ��ʲôҲ�����أ�������ʧͶע��Ǯ��
��ͽ����һ��Ͷ1Ԫ��ʧ�ܵĻ�Ͷע*2�������е�Ǯ����Ͷעʱ��Ͷע���´�һԪ��ʼ
�ɹ��Ļ�Ͷע���±�Ϊ1Ԫ
�ɹ����������е�Ǯ���ڵ���Ŀ��ֵ
ʧ�����������е�ǮΪ0
*/


#include <iostream>
#include<stdlib.h>  //�˺������������
#include<time.h>  //�Զ������õ�

int times;
int start_money;
int win_money;
int money;
long int win_times;
unsigned int seed;
int money_set;


void game() {
	money = start_money;
	money_set = 1;
	while (money > 0)
	{
		//std::cout << money << std::endl;
		if (money < win_money) {
	    if (money < money_set)
		{
			money_set = 1;
		}
		money = money - money_set;
		seed = seed -1;
		srand(seed);
			 if (rand() % 2 + 1 == 1)
			 {
			    //std::cout <<"Ӯ" << std::endl;
				money = money + money_set * 2;
				money_set = 1;
			 }
			 else
			 {
				//std::cout <<"��" << std::endl;
				money_set = money_set * 2;
			 }
		}
		else
		{
			win_times = win_times + 1;
			break;
		}
	}
}

int main() {
	using namespace std;
	cout << "�˳��򾭲�׼ȷ����ѧ��飬���д���������.\n";
	cout << "�������ʾģ��Ĳ��ɹ���\n";
	cout << "���򣺳ɹ�������ʧ�ܼ��ʾ�Ϊ1/2���ɹ�����Ͷע��Ǯ*2,ʧ��ʲôҲ�����أ�������ʧͶע��Ǯ��\n";
	cout << "��ͽ����һ��Ͷ1Ԫ��ʧ�ܵĻ�Ͷע*2�������е�Ǯ����Ͷעʱ��Ͷע���´�һԪ��ʼ\n";
	cout << "�ɹ��Ļ�Ͷע���±�Ϊ1Ԫ\n";
	cout << "�ɹ����������е�Ǯ���ڵ���Ŀ��ֵ\n";
	cout << "ʧ�����������е�ǮΪ0\n";
	cout << "���Դ�����\n";
	cin >> times;
	cout << "��ʼ�ʽ�\n";
	cin >> start_money;
	cout << "Ŀ���ʽ�\n";
	cin >> win_money;
	cout << "���ڼ���... ... ���Ե�\n";
	seed = time(NULL);
	for (int i = 0; i < times; i++)
	{
		game();
		//std::cout <<"\n";
	}
	cout << "�ɹ�����:�ܴ���=" << win_times << ":" << times<< endl;
	system("pause");
}
