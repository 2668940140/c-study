
#include <iostream>

int gcd(int a, int b) {
	return a == 0 ? b : gcd(b%a, a); //�������ӳ����������ӳ�����ʵ��ѭ�� (�ݹ�)
	//��Ŀ���������x ? y��z; �������Ŀ��������Ĺ����ǣ��ȼ�����ʽx��ֵ����xΪ�棬��������Ŀ����Ľ���Ǳ��ʽy��ֵ����xΪ�٣���������Ŀ����Ľ���Ǳ��ʽz��ֵ��
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
