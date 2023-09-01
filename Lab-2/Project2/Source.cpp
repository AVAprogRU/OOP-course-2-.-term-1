#include "Header.h"
#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>


using namespace std;
stopwatch::stopwatch(time_t additionalsec, char* ame) {
	seccreate = time(NULL);
	strcpy_s(name, ame);
	this->additionalsec = additionalsec;
}
stopwatch::stopwatch() {
	seccreate = time(NULL);
	strcpy_s(name, "first");
	additionalsec = 10;
}
stopwatch::stopwatch(const stopwatch& ob) {
	this->additionalsec = ob.additionalsec;
	this->seccreate = ob.seccreate;
	this->secondstart = ob.secondstart;
	this->secondstop = ob.secondstop;
	strcpy_s(this->name, ob.name);
	cout << "Секундомер скопирован." << endl;
}
void stopwatch::start() {
	cout << "Запустился секундомер " << name << ". Отсчет идет с " << additionalsec << " секунды." << endl;
	secondstart = time(NULL);
}
void stopwatch::stop() {
	secondstop = time(NULL);
	cout << "Время работы секундомера " << name << " : " << secondstop - secondstart + additionalsec << endl;
}
void stopwatch::show() {
	cout << "Прошло секунд : " << time(NULL) - secondstart << endl;
}
stopwatch::~stopwatch() {
	cout << "Отработал деструктор. Время жизни объекта " << name << " : " << time(NULL) - seccreate << endl;
	cin.get();
}
int main() {
	setlocale(LC_ALL, "rus");
	stopwatch a;
	a.start();
	Sleep(3000);
	a.show();
	Sleep(2000);
	a.stop();
	char nname[10];
	cout << "Введите имя секундомера : "; cin >> nname;
	stopwatch b(0, nname);
	b.start();
	Sleep(3000);
	b.show();
	Sleep(3000);
	b.stop();

	stopwatch c(b);
	c.start();
	Sleep(2000);
	c.show();
	Sleep(2000);
	c.stop();
	return 0;
}
