#include<iostream>
using namespace std;

void swap(int& x, int& y);

int main() {
	int n1 = 5;
	int n2 = 10;

	cout << "���� n1�� ���� " << n1 << "�Դϴ�.\n";
	cout << "���� n2�� ���� " << n2 << "�Դϴ�.\n";
	cout << "���� n1�� n2�� ���� ��ȯ�մϴ�.\n\n";

	swap(n1, n2);

	cout << "���� n1�� ���� " << n1 << "�Դϴ�.\n";
	cout << "���� n2�� ���� " << n2 << "�Դϴ�.\n";

	return 0;
}

void swap(int& x, int& y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}