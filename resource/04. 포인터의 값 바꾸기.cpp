#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int* pa;

	a = 5;
	b = 10;
	pa = &a;

	cout << "���� a�� ���� " << a << "�Դϴ�.\n";
	cout << "���� a�� �ּҴ� " << &a << "�Դϴ�.\n";
	cout << "pa�� ���� " << *pa << "�Դϴ�.\n";

	pa = &b;

	cout << "���� b�� ���� " << b << "�Դϴ�.\n";
	cout << "������ pa�� ���� " << pa << "�� �ٲ�����ϴ�.\n";
	cout << "pa�� ���� " << *pa<< "�Դϴ�.\n";



	return 0;
}