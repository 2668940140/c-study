
#include <iostream>;

int main() {
	using namespace std;
	int *pa = new int;
	int *pb = new int;
	cout << "Type in two numbers.\na=";
	cin >> *pa;
	cout << "b=";
	cin >> *pb;
	cout << "a+b=" << *pa + *pb;
	cin.get();
	cin.get();
}


/*
使用指针可以带来如下的好处：

（1）可以提高程序的编译效率和执行速度，使程序更加简洁。

（2）通过指针被调用函数可以向调用函数处返回除正常的返回值之外的其他数据，从而实现两者间的双向通信。

（3）利用指针可以实现动态内存分配。

（4）指针还用于表示和实现各种复杂的数据结构，从而为编写出更加高质量的程序奠定基础。

（5）利用指针可以直接操纵内存地址，从而可以完成和汇编语言类似的工作。



（6）跟容易实现函数的编写和调用。


当然，指针也是一把双刃剑，如果对指针不能正确理解和灵活有效的应用，利用指针编写的程序也更容易隐含各式各样的错误，同时程序的可读性也会大打折扣。
*/