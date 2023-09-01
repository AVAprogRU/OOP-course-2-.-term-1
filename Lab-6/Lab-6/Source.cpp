#include"Header.h"
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
arr::arr(int n) {
	this->n = n;
	if (n < 1 || n>12)
		throw myex("Error!Кол-во элементов не может быть", n);
	bool f = 0;
	for (int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << " элемент : ";
		cin >> a[i];
		if (a[i] < 0)
			f = 1;
	}
	if (f == 0)
		throw exception("Error!Нет отрицательных элементов");
}
void arr::show() {
	for (int i = 0; i < n; i++)
		cout << i + 1 << " : " << a[i] << endl;
}
void arr::sort() {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}
int arr::sum() {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0)
			s += a[i];
	}
	return s;
}
int arr::mult() {
	int min = a[0], max = a[0];
	int indmin = 0, indmax = 0;
	int m = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			indmax = i;
		}if (a[i] < min) {
			min = a[i];
			indmin = i;
		}
	}
	if (indmin > indmax)
		swap(indmin, indmax);
	if (indmin == indmax || indmin + 1 == indmax)
		throw exception("Error!Нет элементов между мин и макс");
	for (int i = indmin + 1; i < indmax; i++)
		m = m * a[i];
	return m;
}
myex::myex(const char* r, int n) :exception(r) {
	l = n;
}
int myex::getdata() {
	return l;
}
myex::~myex() { cout << "destrmyex\n"; };
arr::~arr() { cout << "destrarr\n"; };
int main() {
	setlocale(LC_ALL, "rus");
	try {
		int k;
		cout << "Введите колво элементов массива : ";
		cin >> k;
		arr a(k);
		a.show();
		cout << "Сумма отрицательных элементов : " << a.sum() << endl;
		a.sort();
		cout << "Произведение между макс и мин : " << a.mult() << endl;
		a.show();
		cout << "Программа выполнена успешно\n";
	}
	catch (myex& s) {
		cout << s.what();
		if (s.getdata() > 6) {
			cout << " больше 12\n";
		}
		else
			cout << " меньше 1\n";
	}
	catch (const exception& r) {
		cout << r.what() << endl;
	}
	catch (...) {
		cout << "Error!Другие ошибки\n";
	}
	cout << "Конец\n";
	cin.get();
	return 0;
}
