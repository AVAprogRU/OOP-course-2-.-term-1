#include "Header.h"
#include<iostream>
using namespace std;

B1::B1() {
	data = 99;
	cout << "Конструктор по умолчанию В1" << " = " << data << endl;
}
B1::B1(int a) {
	data = a;
	cout << "Работает конструктор В1" << " = " << data << endl;
}
void B1::setb1(int a) {
	data = a;
	cout << "Setter B1 = " << data << endl;
}
void B1::show_B1() {
	cout << "B1 = " << data << endl;
}
B1::~B1() {
	cout << "Деструктор В1\n";
}
B2::B2(int a) {
	data = a;
	cout << "Работает конструктор В2" << " = " << data << endl;
}
void B2::show_B2() {
	cout << "B2 = " << data << endl;
}
B2::~B2() {
	cout << "Деструктор В2\n";
}
D1::D1(int a, int b1) : B1(b1)
{
	data = a;
	cout << "Работает конструктор D1" << " = " << data << endl;
}
void D1::show_D1() {
	cout << "D1 = " << data << endl;
	show_B1();
};
D1::~D1() {
	cout << "Деструктор D1\n";
};
D2::D2(int a, int b1, int b2) : B1(b1), B2(b2)
{
	data = a;
	cout << "Работает конструктор D2" << " = " << data << endl;
	setb1(b1);
}
void D2::show_D2() {
	cout << "D2 = " << data << endl;
	show_B1();
	show_B2();
}
D2::~D2() {
	cout << "Деструктор D2\n";
}
D3::D3(int a, int b1, int b2, int d1, int d2) : D1(d1, b1), D2(d2, b1, b2)
{
	data = a;
	cout << "Работает конструктор D3 = " << data << endl;
}
void D3::show_D3() {
	cout << "D3 = " << data << endl;
	show_D1();
	show_D2();
}
D3::~D3() {
	cout << "Деструктор D3\n";
}

void main() {
	setlocale(LC_ALL, "rus");
	D3 x(1, 2, 3, 4, 5);
	cout << "D3 (1,2,3,4,5);\nСледуя иерархии D3\n";
	x.show_D3();
}
