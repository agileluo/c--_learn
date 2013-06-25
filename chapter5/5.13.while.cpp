#include <iostream>

const int charSize = 80;

int main()
{
	using namespace std;
	
	char name[charSize];
	
	cout << "Your first name:";
	cin >> name;
	cout << "Here is your name, vv and hh:" << endl;
	
	int i = 0;
	while(name[i] != '\0'){
		cout << name[i] << ": " << int(name[i]) k << endl;
		i++;
	}
	
}