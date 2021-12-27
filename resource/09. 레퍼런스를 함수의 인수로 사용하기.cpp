#include<iostream>
using namespace std;

void swap(int& x, int& y);

int main() {
	int n1 = 5;
	int n2 = 10;

	cout << "변수 n1의 값은 " << n1 << "입니다.\n";
	cout << "변수 n2의 값은 " << n2 << "입니다.\n";
	cout << "변수 n1과 n2의 값을 교환합니다.\n\n";

	swap(n1, n2);

	cout << "변수 n1의 값은 " << n1 << "입니다.\n";
	cout << "변수 n2의 값은 " << n2 << "입니다.\n";

	return 0;
}

void swap(int& x, int& y) {
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}