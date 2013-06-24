#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string name;
	cout << "Enter your name: " ;
	cin >> name;
	cout << "Hello, " << name << endl;
	cout << "Your first lettle is " << name[0] << endl;
}