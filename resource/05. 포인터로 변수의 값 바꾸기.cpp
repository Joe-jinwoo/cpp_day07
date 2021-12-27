#include<iostream>
using namespace std;

int main() {
	int a;
	int* pa;

	a = 5;
	pa = &a;

	cout << "변수 a의 값은 " << a << "입니다.\n";

	*pa = 50;

	cout << "pa에 50을 대입하였습니다.\n";
	cout << "변수 a의 값은 "<< a << "입니다\n";


	return 0;
}