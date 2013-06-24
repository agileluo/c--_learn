#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;

	const int SIZE = 20;
	
	char charr[SIZE];
	string str;
	
	cout << "Length of string in charr before input : " << strlen(charr) << endl;
	cout << "Length of string in str before input : " << str.size() << endl;
	cout << "Entera line of text\n";
	cin.getline(charr, SIZE);
	cout << "Your entred: " << charr << endl;
	cout << "Entera another line of text\n";
	getline(cin, str);
	cout << "Your entred: " << str << endl;
	
	cout << "Length of string in charr after input : " << strlen(charr) << endl;
	cout << "Length of string in str after input : " << str.size() << endl;
}