#include <iostream>
#include <string>

using namespace std;
const int Size = 5;
void show_strs(const string str[] , int n);
int main()
{
	string str[Size];
	cout << "Enter you 5 favorite programing language:" << endl;

	for(int i = 0 ; i < Size ; i++){
		cout << i + 1 << ": " ;
		cin >> str[i];
	}
	cout << "YOur list: " << endl;
	show_strs(str, Size);
}

void show_strs(const string str[] , int n){
	for(int i = 0 ; i < n ; i++){
		cout << i + 1 << ": " << str[i] << endl;
	}
}
