#include <cmath>
#include <iostream>
const long double pi = 3.1415926;  //const ���� ���� = ֵ;  ���峣��

int main() {
	using namespace std;
	double radius, perimeter, area;  //radius����뾶��perimeter�ܳ���area���

	cout << "Please type the radius of the circle.\n";
	cin >> radius;
	perimeter = 2 * pi*radius;
	area = pi*pow(radius, 2);
	cout << "The perimeter of the circle is about " << perimeter<<endl;
	cout << "The area of the circle is about " << area << endl;

	system("pause");
	return 0;
}
