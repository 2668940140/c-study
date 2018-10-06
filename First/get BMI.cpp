/*
BMI - 体重指数
体质指数（BMI）=体重（kg）÷身高^2（m）
成人的BMI数值：
过轻：低于18.5
正常：18.5-23.9
过重：24-27
肥胖：28-32
非常肥胖, 高于32
*/


#include <iostream>
#include <cmath>

//后面用到的函数必须放在它的前面
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
	cout << "How much do you weigh（kg）?" << endl;
	cin >> weight;
	cout << "How tall are you(cm)?" << endl;
	cin >> height;
	answer = BMI(height, weight);
	cout << "Your BMI is " <<answer << endl;
	//后面是判断体重范围
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
