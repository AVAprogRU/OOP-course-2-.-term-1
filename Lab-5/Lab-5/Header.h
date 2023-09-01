#pragma once
#include<iostream>
using namespace std;
class B1 {
	int data;
public:
	B1();
	B1(int);
	void setb1(int);
	void show_B1();
	~B1();
};
class B2 {
	int data;
public:
	B2(int);
	void show_B2();
	~B2();
};
class D1 :virtual public  B1 {
	int data;
public:
	D1(int, int);
	void show_D1();
	~D1();
};
class D2 :virtual public B1, private B2 {
	int data;
public:
	D2(int, int, int);
	void show_D2();
	~D2();
};
class D3 :private D1, public D2 {
	int data;
public:
	D3(int, int, int, int, int);
	void show_D3();
	~D3();
};
