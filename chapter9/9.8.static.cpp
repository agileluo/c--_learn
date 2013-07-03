#include <iostream>

const int arrSize = 10;

void arrCount(const char* arr);

using namespace std;
int main()
{
	char arr[arrSize];
	char next;
	
	while(true){
		cout << "Enter a line: \n";
		cin.get(arr, arrSize);
		while(cin.get(next) && next != '\n') ;
		
		if(cin){
			arrCount(arr);
		}else{
			break;
		}
	}
}

void arrCount(const char* arr){
	cout << "\"" << arr << "\"" << "contains ";
	int sum = 0;
	static int total = 0;
	int index = 0;
	while(*(arr++) != '\0'){
		sum++;
	}
	total += sum;
	cout << sum << " characters, total " << total << " characters" << endl;
}