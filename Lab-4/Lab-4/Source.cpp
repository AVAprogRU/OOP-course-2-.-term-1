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
	cout << "Имя : " << name << endl;
	cout << "Кордината центра фигуры по Х : " << this->x << endl;
	cout << "Кордината центра фигуры по Y : " << this->y << endl;
	cout << "Длина фигуры или радиус : " << this->a << endl;
}
void square::showarea() {
	cout << "Площадь квадрата равна : " << a * a << endl;
}
void square::showperimeter() {
	cout << "Периметр квадрата равен : " << a * 4 << endl;
}
square::square(char* a, int x, int y, int l) :
	object(a, x, y, l) {
}
void circle::showarea() {
	cout << "Площадь круга равна : " << M_PI * a * a << endl;
}
void circle::showperimeter() {
	cout << "Периметр круга равен : " << M_PI * a * 2 << endl;
}
circle::circle(char* a, int x, int y, int l) :
	object(a, x, y, l) {
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[10];
	int x, y, l;
	cout << "Создается квадрат.Введите название фигуры : ";
	cin >> name;
	cout << "Введите абсциссу центра квадрата : ";
	cin >> x;
	cout << "Введите ординату центра квадрата : ";
	cin >> y;
	cout << "Введите длину квадрата : ";
	cin >> l;
	square c(name, x, y, l);

	cout << "Создается круг.Введите название фигуры : ";
	cin >> name;
	cout << "Введите абсциссу центра кргуа : ";
	cin >> x;
	cout << "Введите ординату центра кргуа : ";
	cin >> y;
	cout << "Введите радиус круга : ";
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
