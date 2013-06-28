#include <iostream>
#include <cstring>

int left(int num, int n);
char* left(char* str, int n);

using namespace std;
int main(){
	
	
	char trip[] = "continue";
	int n = 12345678;
	
	char* temp;
	
	for(int i = 1; i < 10; i++){
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete [] temp;
	}
}


int left(int num, int n){
	int numLength = 0;
	int temp = num;
	while(temp){
		numLength++;
		temp /= 10;
	}
	if( n >= numLength ) 
		return num;
	else{
		for(int i = 0; i < numLength - n; i++){
			num /= 10;	
		}
		return num;
	}
}

char* left(char* str, int n){
	int strLen = strlen(str);
	int length = strLen < n ? strLen : n;
	
	char* result = new char[n + 1];
	for(int i = 0; i < length; i++){
		result[i] = str[i];
	}
	result[length] = '\0';
	return result;
}

