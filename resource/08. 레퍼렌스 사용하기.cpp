#include<iostream>
using namespace std;

int main() {
	int a;
	int& ra = a;

	cout << "���� a�� ���� " << a << "�Դϴ�.\n";
	cout << "���۷��� ra�� ���� " << ra << "�Դϴ�.\n";

	ra = 50;

	cout << "\nra�� 50�� �����Ͽ����ϴ�\n";
	cout << "���۷��� ra�� ���� " << ra << "�� ����Ǿ����ϴ�.\n";
	cout << "���� a�� ���� " << a << "�� ����Ǿ����ϴ�.\n";
	cout << " ���� a�� �ּҴ� " << &a << "�Դϴ�.\n";
	cout << "���۷��� ra�� �ּҵ� " << &ra << "�Դϴ�.\n";

	return 0;
}