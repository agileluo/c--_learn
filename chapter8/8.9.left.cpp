#include <iostream>

char* left(char* str, int n = 1);

int main()
{
	char str[80];
	using namespace std;
	cout << "Enter a string:\n";
	cin >> str;
	char* ps = left(str, 4);
	cout << ps << endl;
	delete [] ps;
	ps = left(str);
	cout << ps << endl;
	
	delete [] ps;
	
}

char* left(char* str, int n){
	char* result = new char[n+1];
	for(int i = 0; i < n; i++){
		result[i] = str[i];
	}
	result[n] = '\0';
	
	return result;
}