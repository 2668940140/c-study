/*
本程序表示模拟赌博成功率
规则：成功几率与失败几率均为1/2，成功返回投注的钱*2,失败什么也不返回（等于损失投注的钱）
赌徒：第一次投1元，失败的话投注*2，当持有的钱不够投注时，投注重新从一元开始
成功的话投注重新变为1元
成功条件：持有的钱大于等于目标值
失败条件：持有的钱为0
*/


#include <iostream>
#include<stdlib.h>  //此含有生成随机数
#include<time.h>  //自动种子用的

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
			    //std::cout <<"赢" << std::endl;
				money = money + money_set * 2;
				money_set = 1;
			 }
			 else
			 {
				//std::cout <<"输" << std::endl;
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
	cout << "此程序经不准确的数学检查，还有错误，望改正.\n";
	cout << "本程序表示模拟赌博成功率\n";
	cout << "规则：成功几率与失败几率均为1/2，成功返回投注的钱*2,失败什么也不返回（等于损失投注的钱）\n";
	cout << "赌徒：第一次投1元，失败的话投注*2，当持有的钱不够投注时，投注重新从一元开始\n";
	cout << "成功的话投注重新变为1元\n";
	cout << "成功条件：持有的钱大于等于目标值\n";
	cout << "失败条件：持有的钱为0\n";
	cout << "测试次数：\n";
	cin >> times;
	cout << "起始资金：\n";
	cin >> start_money;
	cout << "目标资金：\n";
	cin >> win_money;
	cout << "正在计算... ... 请稍等\n";
	seed = time(NULL);
	for (int i = 0; i < times; i++)
	{
		game();
		//std::cout <<"\n";
	}
	cout << "成功次数:总次数=" << win_times << ":" << times<< endl;
	system("pause");
}
