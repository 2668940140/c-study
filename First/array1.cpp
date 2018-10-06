
#include <iostream>

int main() {
	using namespace std;
	char language[] = "One sentence at a time.";  //C style
	cout << language << endl;
	cout << "The first letter in the sentence is " << language[0] << endl;  
	//数组声明是数字就是数量，引用时从0开始。如int a[2];最多可以引用到a[1],a[2]会出错，但a[0]是允许的。
	system("pause");
	return 0;
}
