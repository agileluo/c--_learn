#include <iostream>

void oil(int x);

using namespace std;
int main()
{
	int texas = 19;
	int year = 2013;
	
	cout << "in main: textas = " << texas << ", &texas = " << &texas << endl;
	cout << "in main: year = " << year << ", &year = " << &year << endl;
	oil(texas);
	cout << "in main: textas = " << texas << ", &texas = " << &texas << endl;
	cout << "in main: year = " << year << ", &year = " << &year << endl;
}

void oil(int x)
{
	int texas = 5;
	cout << "in oil: textas = " << texas << ", &texas = " << &texas << endl;
	cout << "in oil: x = " << x << ", &x = " << &x << endl;
	{
		int texas = 113;
		cout << "in block: textas = " << texas << ", &texas = " << &texas << endl;
	}
	cout << "in oil post block: textas = " << texas << ", &texas = " << &texas << endl;
}