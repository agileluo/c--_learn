#include <iostream>
#include <cmath>
#include "9.1.coordin.h"

polar rect2polar(rect r){
	polar result;
	result.distance = sqrt( r.x * r.x + r.y * r.y);
	result.angle = atan2(r.y, r.x);
	return result;
}
void show_polar(polar pl){
	using namespace std;
	cout << "distance = " << pl.distance << ", angle = " << pl.angle * 180 / M_PI << endl;
}