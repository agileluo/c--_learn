#include <iostream>
#include <cmath>

struct rect{
	double x;
	double y;
};
struct polar{
	double distance;
	double angle;
};

polar rect2polar(rect r);
void show_polar(polar pl);

using namespace std;
int main()
{
	double x;
	double y;
	
	while(true){
		rect r;
		cout << "Enter the x and y values(q to quit): " ;
		cin >> r.x;
		cin >> r.y;
		if(cin.fail()){
			break;
		}
		polar pl = rect2polar(r);
		show_polar(pl);
	}
}

polar rect2polar(rect r){
	polar result;
	result.distance = sqrt( r.x * r.x + r.y * r.y);
	result.angle = atan2(r.y, r.x);
	return result;
}
void show_polar(polar pl){
	cout << "distance = " << pl.distance << ", angle = " << pl.angle * 180 / M_PI << endl;
}

