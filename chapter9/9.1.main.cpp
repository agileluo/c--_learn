#include <iostream>
#include "9.1.coordin.h"

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