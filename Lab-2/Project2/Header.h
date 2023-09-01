#pragma once
#include <ctime>
class stopwatch {
private:
	time_t seccreate;
	time_t secondstart;
	time_t secondstop;
	time_t additionalsec;
	char name[10];
public:
	stopwatch(time_t, char*);
	stopwatch(const stopwatch&);
	stopwatch();
	void start();
	void stop();
	void show();
	~stopwatch();
}
#pragma once
