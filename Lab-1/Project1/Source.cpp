#include "Header.h"
#include <iostream>
using namespace std;

void ecuation::set(float k, float b, float y) {

	this->b = b;
	this->k = k;
	this->y = y;
}
float ecuation::Root() {
	return (y - b) / k;
}
void ecuation::output() {
	cout << "Исходные значения класса: " << endl << "y = " << this->y << endl;
	cout << "k = " << this->k << endl;
	cout << "b = " << this->b << endl;
}
void ecuation::result() {
	cout << "Ответ: ";
	if ((k == 0) && (y - b == 0))
		cout << "x - любое число" << endl;
	else if ((k == 0) && (y - b != 0))
		cout << "уравнение не имеет корней" << endl;
	else
		cout << "x = " << this->Root() << endl;
}
int main() {
	setlocale(LC_ALL, "rus");
	ecuation a;
	cout << "Уравнение вида y = k*x + b ." << endl;
	float k, b, y;
	cout << "Введите к: ";
	cin >> k;
	while (cin.fail() || (cin.get() != '\n')) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Вы ввели недопустимое значение k. Попробуйте снова: ";
		cin >> k;
	}
	cout << "Введите b: ";
	cin >> b;
	while (cin.fail() || (cin.get() != '\n')) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Вы ввели недопустимое значение b. Попробуйте снова: ";
		cin >> b;
	}
	cout << "Введите y: ";
	cin >> y;
	while (cin.fail() || (cin.get() != '\n')) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "Вы ввели недопустимое значение y. Попробуйте снова: ";
		cin >> y;
	}

	a.set(k, b, y);
	a.Root();
	a.result();
	a.output();
}
