//add �Լ��� 2���� ���� ���ϱ�
#include<iostream>
using namespace std;

void add(int* x, int* y, int a);

int main() {
	int x, y, a;
	
	cout << "2���� ���� ������ �Է��ϼ���. : "; cin >> x >> y;
	cout << "���� ������ �Է��ϼ���. : "; cin >> a;

	add(&x, &y, a);

	cout << a << "���� �������Ƿ�\n����1�� " << x << "���� �Ǿ����ϴ�.\n����2�� "<< y << "���� �Ǿ����ϴ�.\n";

	return 0;
}

void add(int* x, int* y, int a) {
	*x += a;
	*y += a;
}