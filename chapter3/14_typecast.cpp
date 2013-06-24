#include <iostream>

int main()
{
	using namespace std;
	
	int auks, bats, coots;
	
	auks = 19.99 + 11.99;
	cout << "auks = " << auks << ", ";
	
	bats = (int)19.99 + (int)11.99; //c style
	cout << "bats = " << bats << ", ";
	
	coots = int(19.99) + int(11.99); //c style
	cout << "coots = " << coots << ", ";
	
	cout << endl;
	
	char ch = 'Z';
	cout << "The cod for " << ch << " is " << int(ch) << endl;

	
}