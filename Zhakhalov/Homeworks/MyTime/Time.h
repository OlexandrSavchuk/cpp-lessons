#pragma once

#include <cstring>
#include <cstdio>
#include <iostream>
#include <iomanip>

class Time
{
private:

	int Seconds;

public:

	enum Format{
		Format_24 = 0,   // What for zero is here?
		Format_12
	};

	Time(void);
	Time(int seconds);            // Time(int = 0); will replace two constructors
	~Time(void);

	void PrintTime(Format) const;
	void SetTime();

	Time operator +(const Time T)
	{
		return Time(Seconds + T.Seconds);
	}

	Time operator -(const Time T)
	{
		return Time(Seconds - T.Seconds);
	}

	bool operator >(const Time T)
	{
		return(Seconds > T.Seconds);
	}

	bool operator <(const Time T)
	{
		return(Seconds < T.Seconds);
	}
};

