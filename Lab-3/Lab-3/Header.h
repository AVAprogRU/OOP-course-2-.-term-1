#pragma once
class pr {
private:
	int a;
	int b;
public:

	pr(int, int);
	~pr();
	friend int operator* (const pr& c1, const pr& c2);
	bool  operator < (pr);
	int  operator + ();
};
