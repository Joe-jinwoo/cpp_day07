#include<iostream>
using namespace std;

int main() {
	int a;
	int* pa;

	a = 5;
	pa = &a;

	cout << "���� a�� ���� " << a << "�Դϴ�.\n";
	cout << "���� a�� �ּҴ� " << &a << "�Դϴ�.\n";
	cout << "������ pa�� ���� " << pa << "�Դϴ�.\n";


	return 0;
}