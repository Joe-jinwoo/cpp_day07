#include<iostream>
using namespace std;

int main() {
	int a;
	int* pa;

	a = 5;
	pa = &a;

	cout << "���� a�� ���� " << a << "�Դϴ�.\n";

	*pa = 50;

	cout << "pa�� 50�� �����Ͽ����ϴ�.\n";
	cout << "���� a�� ���� "<< a << "�Դϴ�\n";


	return 0;
}