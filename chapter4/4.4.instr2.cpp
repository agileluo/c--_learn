#include <iostream>

int main()
{
	using namespace std;

	const int size = 15;
	char name[size];
	char dessert[size];
	
	cout << "Enter you name:\n";
	cin.getline(name,size);
	cout << "Enter your favorite dessert: \n";
	cin.getline(dessert,size);
	cout << "I have some " << dessert << " for you. " << name << endl;
	
}