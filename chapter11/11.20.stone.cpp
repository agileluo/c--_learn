#include <iostream>
#include "11.20.stonewt.h"

int main()
{
	using std::cout;
	
	Stonewt popins(2.8);
	double p_wt = popins;
	
	cout << "Covert to double => Poppins: " << p_wt << " pounds.\n";
	cout << "Covert to int => Poppins: " << (int)popins << " pounds.\n";
}