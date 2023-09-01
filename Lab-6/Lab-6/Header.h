#pragma once
#include <iostream>

#include <exception>
using namespace std;


class myex :public exception {
private:
	int l;
public:
	myex(const char*, int);
	int getdata();
	~myex();
};

class arr {
private:
	int n;
	int a[12];
public:
	arr(int);
	int sum();
	int mult();
	void sort();
	void show();
	~arr();
};
