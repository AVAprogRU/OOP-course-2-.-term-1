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
	cout << "�������� �������� ������: " << endl << "y = " << this->y << endl;
	cout << "k = " << this->k << endl;
	cout << "b = " << this->b << endl;
}
void ecuation::result() {
	cout << "�����: ";
	if ((k == 0) && (y - b == 0))
		cout << "x - ����� �����" << endl;
	else if ((k == 0) && (y - b != 0))
		cout << "��������� �� ����� ������" << endl;
	else
		cout << "x = " << this->Root() << endl;
}
int main() {
	setlocale(LC_ALL, "rus");
	ecuation a;
	cout << "��������� ���� y = k*x + b ." << endl;
	float k, b, y;
	cout << "������� �: ";
	cin >> k;
	while (cin.fail() || (cin.get() != '\n')) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "�� ����� ������������ �������� k. ���������� �����: ";
		cin >> k;
	}
	cout << "������� b: ";
	cin >> b;
	while (cin.fail() || (cin.get() != '\n')) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "�� ����� ������������ �������� b. ���������� �����: ";
		cin >> b;
	}
	cout << "������� y: ";
	cin >> y;
	while (cin.fail() || (cin.get() != '\n')) {
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cout << "�� ����� ������������ �������� y. ���������� �����: ";
		cin >> y;
	}

	a.set(k, b, y);
	a.Root();
	a.result();
	a.output();
}
