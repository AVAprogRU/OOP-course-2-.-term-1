#include <iostream>
#include"Header.h"
using namespace std;
pr::pr(int as, int bs) {
	a = as;
	b = bs;
}
int pr:: operator + () {

	return this->a * this->b;
}
int operator* (const pr& c1, const pr& c2) {
	return min(c1.a, c2.a) * min(c1.b, c2.b);

}
bool pr:: operator < (pr a) {
	if (this->a * this->b > a.a * a.b)
		return true;
	else
		return false;
}
pr::~pr() {
	cout << "����������" << endl;
	cin.get();
}
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "��������� ������� ��������������:" << endl;
	cout << "����� : ";
	cin >> a;
	cout << "������ : ";
	cin >> b;
	pr c1(a, b);
	cout << "��������� ������� ��������������:" << endl;
	cout << "����� : ";
	cin >> a;
	cout << "������ : ";
	cin >> b;
	pr c2(a, b);
	cout << "������� ����������� ����� : " << c1 * c2 << endl;
	if (c1 < c2)
		cout << "������ ������������� ������" << endl;
	else
		cout << "������ ������������� �� ������" << endl;
	cout << "������� ������� �������������� : " << +c1 << endl;
	cout << "������� ������� �������������� : " << +c2 << endl;
	return 0;

}
