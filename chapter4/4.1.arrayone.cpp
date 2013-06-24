#include <iostream>

int main()
{
	using namespace std;
	int yams[3] = {7, 8, 6};
	int yamCosts[3] = {20, 30, 5};
	
	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] 
		 << " costs " << yamCosts[1] << " per yams.\n";
	
	int totalCost = yams[0]*yamCosts[0] + yams[1]*yamCosts[1] + yams[2]*yamCosts[2]; 
	cout << "The total yam expense is " << totalCost << " cents.\n";
	
	
	cout << "Size of yams array = " << sizeof(yams) << " bytes.\n";
	cout << "Size of one element = " << sizeof(yams[0]) << " bytes.\n";
	
}