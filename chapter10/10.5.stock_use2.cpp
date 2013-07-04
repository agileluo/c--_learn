#include <iostream>
#include "10.4.stock.h"

const int STKS = 4;

int main()
{
	using std::cout;
	using std::ios_base;
	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	
	Stock stocks[STKS] = {
		Stock("java", 50, 90),
		Stock("c++", 10, 40),
		Stock("groovy", 20, 50),
		Stock("javascript", 20, 30)
	};
	
	Stock& top = stocks[0];
	for(int i = 1; i < STKS; i++){
		top = top.topVal(stocks[i]);
	}
	top.show();
	
	return 0;
}