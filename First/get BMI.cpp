/*
BMI - ����ָ��
����ָ����BMI��=���أ�kg�������^2��m��
���˵�BMI��ֵ��
���᣺����18.5
������18.5-23.9
���أ�24-27
���֣�28-32
�ǳ�����, ����32
*/


#include <iostream>
#include <cmath>

//�����õ��ĺ��������������ǰ��
double BMI(double height, double weight) {
	double bmi;
	height = height / 100;
	bmi = weight / pow(height, 2); //pow(x,y) = x ^ y
	return (bmi);
}

int main() {
	double height, weight, answer;
	using namespace std;
	cout << "I can answer your BMI." << endl;
	cout << "How much do you weigh��kg��?" << endl;
	cin >> weight;
	cout << "How tall are you(cm)?" << endl;
	cin >> height;
	answer = BMI(height, weight);
	cout << "Your BMI is " <<answer << endl;
	//�������ж����ط�Χ
	if (answer < 18.5)
	{
		cout << "You are too light.";
	}
	else
	{
		if (answer < 23.9) {
			cout << "You are normal.";
		}
		else
		{
			if (answer < 27)
			{
				cout << "You are overweight";
			}
			else
			{
				if (answer < 32)
				{
					cout << "you are fat.";
				}
				else
				{
					cout << "you are very fat.";
				}
			}
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
