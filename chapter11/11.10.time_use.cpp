#include <iostream>
#include "11.10.time.h"


int main()
{
	using std::cout;
	using std::endl;
	
	Time planning;
	Time coding(4, 30);
	Time fixing(1, 50);
	Time total;
	
	cout << "coding: " << coding << endl;
	cout << "fixing: " << fixing << endl;
	
	cout << "coding + fixing: " << coding + fixing << endl;
	cout << "coding * 2: " << coding * 2 << endl;
	cout << "3 * coding: " << 3 * coding << endl;
	
	
	
}