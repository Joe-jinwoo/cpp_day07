//add 함수로 2과목에 점수 더하기
#include<iostream>
using namespace std;

void add(int* x, int* y, int a);

int main() {
	int x, y, a;
	
	cout << "2과목 분의 점수를 입력하세요. : "; cin >> x >> y;
	cout << "더할 점수를 입력하세요. : "; cin >> a;

	add(&x, &y, a);

	cout << a << "점을 더했으므로\n과목1은 " << x << "점이 되었습니다.\n과목2는 "<< y << "점이 되었습니다.\n";

	return 0;
}

void add(int* x, int* y, int a) {
	*x += a;
	*y += a;
}