#include <iostream>
#include "12.4.String.h"

using std::cout;
using std::cin;
using std::endl;

const int arrSize = 10;
const int maxLen = 81;

int main()
{
	String name;
	cout << "Hi, what's your name?\n>>";
	cin >> name;
	
	cout << name << ", please enter your 10 short sayings:<empty line to quit>\n";
	
	String says[arrSize];
	char temp[maxLen];
	
	int i;
	for(i = 0; i < arrSize; i++){
		cout << i+1 << ": ";
		cin.get(temp, maxLen);
		while(cin && cin.get() != '\n'){
			continue;
		}
		if( !cin || temp[0] == '\0') {
			break;
		}else{
			says[i] = temp;
		}
	}
	int total = i;
	cout  << "here are your says:\n";
	for(int i = 0; i < total; i++){
		cout << says[i][0] << ": " << says[i] << endl;
	}
	
	cout << "This program used " << String::howMany() << " String object. " << endl; 
	
}