
#include <iostream>

int gcd(int a, int b) {
	return a == 0 ? b : gcd(b%a, a); //可以在子程序内引用子程序本身实现循环 (递归)
	//三目条件运算符x ? y：z; 上面的三目条件运算的规则是：先计算表达式x的值，若x为真，则整个三目运算的结果是表达式y的值；若x为假，则整个三目运算的结果是表达式z的值。
}

int main() {
	using namespace std;
	long number[2][2]; //Use a,b,c,d is better.

	cout << "Compute a/b+c/d\n";
	cout << "a=";
	cin >> number[0][0];
	cout << "b=";
	cin >> number[0][1];
	cout << "c=";
	cin >> number[1][0];
	cout << "d=";
	cin >> number[1][1];


	int answer[2] = { number[0][0] * number[1][1] + number[1][0] * number[0][1],number[0][1] * number[1][1] };
	long divisor = gcd(answer[0], answer[1]);
	answer[0] = answer[0] / divisor;
	answer[1] = answer[1] / divisor;
	if (answer[1] == 1)
	{
		cout << "The answer is " << answer[0] << endl;
	}
	else
	{
		cout << "The answer is " << answer[0] << "/" << answer[1] << endl;
	}
	system("pause");

}
