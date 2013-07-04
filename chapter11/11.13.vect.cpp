#include <iostream>
#include <cmath>
#include "11.13.vect.h"

namespace VECTOR{
	using namespace std;
	void Vector::set_x(){
		x = mag * cos(ang);
	}
	void Vector::set_y(){
		y = mag * sin(ang);
	}
	void Vector::set_mag(){
		mag = sqrt(x * x + y * y);
	}
	void Vector::set_ang(){
		if( x == 0.0 && y == 0.0){
			ang = 0.0;
		}else{
			ang = atan2(y,x);
		}
	}

	Vector::Vector(){
		x = 0.0;
		y = 0.0;
		mag = 0.0;
		ang = 0.0;
		mode = 'r';
	}
	
	Vector::Vector(double x, double y,char mode){
		set(x, y, mode);
	}
	void Vector::set(double x, double y ,char mode){
		this->mode = mode;
		if( 'r' == mode ){
			this->x = x;
			this->y = y;
			set_mag();
			set_ang();
		}else if( 'p' == mode ) {
			mag = x;
			ang = y;
			set_x();
			set_y();
		}else{
			std::cout << "Error";
			x = y = mag = ang = 0.0;
			this->mode = 'r';
		}
	}
	Vector Vector::operator+(const Vector& v)const{
		return Vector(x + v.x , y + v.y);
	}
	std::ostream& operator<<(std::ostream& os, const Vector& v){
		os << v.x << ", " << v.y << " " ;
		return os;
	}
}




