#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	int year;
	
	cout << "What year was your house built?\n";
	cin >> year;
	cin.get();
	cout << "What's the street address?\n";
	char address[80];
	cin.getline(address, strlen(address));
	
	cout << "Year build: " << year << endl;
	cout << "Address: " << address << endl;
	
}