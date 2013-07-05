
#include "11.20.stonewt.h"

Stonewt::Stonewt(double pounds){
	this->pounds = pounds;
}

Stonewt::operator int()const{
	return (int)pounds;
}
Stonewt::operator double()const{
	return pounds;
}
