#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	const int size = 15;
	char vName[size];
	char myName[size] = "C++owboy";
	
	cout << "Howdy! I'm " << myName;
	cout << "! What's your name:\n";
	cin >> vName;
	cout << "Well, " << vName << ", your name has ";
	cout << strlen(vName) << " letters and is stored in a array of ";
	cout << sizeof(vName) << " bytes.";
	
	cout << "Your initial is " << vName[0] << endl;
	myName[3] = '\0';
	cout << "Here are the first 3 characters of my name: " << myName << endl;
}