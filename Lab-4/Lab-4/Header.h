
#pragma once
class object {

protected:
	char name[10];
	int x;
	int y;
	int a;
public:
	object(char*, int, int, int);
	object();
	void show();
};
class square : public object {
public:
	square(char*, int, int, int);
	void showarea();
	void showperimeter();
};
class circle : public object {
public:
	circle(char*, int, int, int);
	void showarea();
	void showperimeter();

};
