#include <iostream>

char* buildstr(char c, int n);

int main()
{
	using namespace std;
	
	char c;
	int n;
	cout << "Enter a character: ";
	cin >> c;
	cout << "Enter a integer: ";
	cin >> n;
	char* ps = buildstr(c, n);
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+', 15);
	cout << ps << "Done" << ps << endl;
	delete [] ps;
	
}


char* buildstr(char c, int n){
	char * result = new char[ n+ 1];
	result[n] = '\0';
	for(int i = 0; i < n; i++){
		result[i] = c;
	}
	return result;
}