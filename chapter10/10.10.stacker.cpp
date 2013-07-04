#include <iostream>
#include "10.10.stack.h"

int main()
{
	using namespace std;
	
	Stack stack;
	char ch;
	
	unsigned long po;
	
	while(true){
		cout << "Enter a to add purchase order. p to process a po, or Q to quit.";
		cin >> ch;
		if( 'a' == ch ){
			cout << "Enter a PO number to add: " ;
			cin >> po;
			stack.push(po);
		}else if( 'p' == ch ){
			if(stack.pop(po)){
				cout << "PO #" << po << " poped" << endl;
			}else{
				cout << "All po produced" << endl;
			}
		}else if( 'q' == ch ) {
			break;
		}
	}
}