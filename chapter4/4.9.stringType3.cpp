#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;

	const int SIZE = 20;
	
	char charr1[SIZE];
	char charr2[SIZE] = "c++";
	string str1;
	string str2 = "groovy";
	
	str1 = str2;
	strcpy(charr1, charr2);
	
	str1 += " agileluo";
	strcat(charr1, " agileluo");
	
	int str1Length = str1.size();
	int charr1Length = strlen(charr1);
	
	cout << "The string [" << str1 << "] contains " << str1Length << " characters.\n" ;
	cout << "The string [" << charr1 << "] contains " << charr1Length << " characters.\n" ;
}