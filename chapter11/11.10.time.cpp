#include <iostream>
#include "11.10.time.h"


Time::Time(int hour, int min){
	this->hour = hour;
	this->min = min;
}
Time Time::operator+ ( const Time& time) const{
	Time sum;
	sum.min = this->min + time.min;
	sum.hour = this->hour + time.hour + sum.min/60;
	sum.min = sum.min%60;
	return sum;
}
Time Time::operator- ( const Time& time) const{
	Time sum;
	sum.min = (hour - time.hour) * 60 + (min - time.min);
	sum.hour = sum.min/60;
	sum.min = sum.min%60;
	return sum;
}

Time Time::operator* (int m) const{
	Time sum;
	sum.min = ( hour * 60 + min ) * m;
	sum.hour = sum.min/60;
	sum.min = sum.min%60;
	return sum;
}

std::ostream& operator<<( std::ostream& os, const Time& time){
	os << time.hour << " hours, " << time.min << " minutes.";
	return os;
}