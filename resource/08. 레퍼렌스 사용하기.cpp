#include<iostream>
using namespace std;

int main() {
	int a;
	int& ra = a;

	cout << "변수 a의 값은 " << a << "입니다.\n";
	cout << "레퍼렌스 ra의 값도 " << ra << "입니다.\n";

	ra = 50;

	cout << "\nra에 50을 대입하였습니다\n";
	cout << "레퍼런스 ra의 값은 " << ra << "로 변경되었습니다.\n";
	cout << "변수 a의 값도 " << a << "로 변경되었습니다.\n";
	cout << " 변수 a의 주소는 " << &a << "입니다.\n";
	cout << "레퍼런스 ra의 주소도 " << &ra << "입니다.\n";

	return 0;
}