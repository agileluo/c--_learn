#include <iostream>
#include <cstring>

using namespace std;
char * getname(void);

int main()
{
	char* name;
	
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete [] name;
	
	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete [] name;
}

char * getname()
{
	char* result;
	
	char temp[80];
	cout << "Enter last name:";
	cin >> temp;
	result = new char[strlen(temp) + 1];
	strcpy(result, temp);
	
	return result;
	
}