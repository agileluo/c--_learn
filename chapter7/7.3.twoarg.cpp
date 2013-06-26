#include <iostream>

void n_char(char c, int n);

using namespace std;
int main()
{
	char c;
	int times;
	
	while(true){
		cout << "Enter a character: ";
		cin >> c;
		if( c == 'q'){
			break;
		}
		cout << "Enter an integer: ";
		cin >> times;
		n_char(c, times);
	};
	
	cout << "The value of times is " << times;
	cout << "\nDone\n";
}

void n_char(char c, int n){
	while( n-- >  0 ){
		cout << c;
	}
	cout << endl;
}