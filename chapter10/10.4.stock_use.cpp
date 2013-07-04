#include <iostream>
#include "10.4.stock.h"


int main()
{
	using std::cout;
	using std::ios_base;
	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	
	
	Stock stock1("agileluo", 100, 29.32);
	stock1.show();
	Stock stock2("agilechina", 200, 79.42);
	stock2.show();
	
	cout << "Assing stock1 to stock2.\n";
	stock2 = stock1;
	cout << "Listing stock1 and stock2:\n";
	stock1.show();
	stock2.show();
	
	cout << "Using a constructor to reset an object\n";
	stock1 = Stock("CMMI China", 29, 1.29);
	cout << "Revised stock1.\n";
	stock1.show();
	cout << "Done\n";
	return 0;
}