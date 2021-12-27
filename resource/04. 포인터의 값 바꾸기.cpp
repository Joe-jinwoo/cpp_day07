#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int* pa;

	a = 5;
	b = 10;
	pa = &a;

	cout << "변수 a의 값은 " << a << "입니다.\n";
	cout << "변수 a의 주소는 " << &a << "입니다.\n";
	cout << "pa의 값은 " << *pa << "입니다.\n";

	pa = &b;

	cout << "변수 b의 값은 " << b << "입니다.\n";
	cout << "포인터 pa의 값이 " << pa << "로 바뀌었습니다.\n";
	cout << "pa의 값은 " << *pa<< "입니다.\n";



	return 0;
}