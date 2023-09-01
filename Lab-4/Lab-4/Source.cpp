#include "Header.h"
#include<iostream>
#include <windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

object::object(char* ar, int x, int y, int l) {
	strcpy_s(name, ar);
	this->x = x;
	this->y = y;
	this->a = l;
}
object::object() {
	strcpy_s(name, "dds");
	this->x = 6;
	this->y = 7;
	this->a = 6;
}
void object::show() {
	cout << "��� : " << name << endl;
	cout << "��������� ������ ������ �� � : " << this->x << endl;
	cout << "��������� ������ ������ �� Y : " << this->y << endl;
	cout << "����� ������ ��� ������ : " << this->a << endl;
}
void square::showarea() {
	cout << "������� �������� ����� : " << a * a << endl;
}
void square::showperimeter() {
	cout << "�������� �������� ����� : " << a * 4 << endl;
}
square::square(char* a, int x, int y, int l) :
	object(a, x, y, l) {
}
void circle::showarea() {
	cout << "������� ����� ����� : " << M_PI * a * a << endl;
}
void circle::showperimeter() {
	cout << "�������� ����� ����� : " << M_PI * a * 2 << endl;
}
circle::circle(char* a, int x, int y, int l) :
	object(a, x, y, l) {
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[10];
	int x, y, l;
	cout << "��������� �������.������� �������� ������ : ";
	cin >> name;
	cout << "������� �������� ������ �������� : ";
	cin >> x;
	cout << "������� �������� ������ �������� : ";
	cin >> y;
	cout << "������� ����� �������� : ";
	cin >> l;
	square c(name, x, y, l);

	cout << "��������� ����.������� �������� ������ : ";
	cin >> name;
	cout << "������� �������� ������ ����� : ";
	cin >> x;
	cout << "������� �������� ������ ����� : ";
	cin >> y;
	cout << "������� ������ ����� : ";
	cin >> l;
	circle k(name, x, y, l);
	c.show();
	c.showarea();
	c.showperimeter();
	k.show();
	k.showarea();
	k.showperimeter();
	return 0;
}
