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

void rect2polar(const rect* r, polar* pl);
void show_polar(const polar* pl);

using namespace std;
int main()
{
	rect r;
	polar pl;
	
	while(true){
		cout << "Enter the x and y values(q to quit): " ;
		cin >> r.x;
		cin >> r.y;
		if(cin.fail()){
			break;
		}
		rect2polar(&r, &pl);
		show_polar(&pl);
	}
}

void rect2polar(const rect* r, polar* pl){
	pl->distance = sqrt( r->x * r->x + r->y * r->y);
	pl->angle = atan2(r->y, r->x);
}
void show_polar(const polar* pl){
	cout << "distance = " << pl->distance << ", angle = " << pl->angle * 180 / M_PI << endl;
}

