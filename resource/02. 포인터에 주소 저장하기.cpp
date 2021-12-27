#include<iostream>
using namespace std;

int main() {
	int a;
	int* pa;

	a = 5;
	pa = &a;

	cout << "변수 a의 값은 " << a << "입니다.\n";
	cout << "변수 a의 주소는 " << &a << "입니다.\n";
	cout << "포인터 pa의 값은 " << pa << "입니다.\n";


	return 0;
}