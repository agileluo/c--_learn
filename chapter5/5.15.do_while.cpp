#include <iostream>

int main()
{
	using namespace std;
	
	int num;
	
	cout << "guess my favorite num:\n" ;
	do{
	   cin >> num;
	}while(num != 7);
	cout << num << " is my favorite num!\n";
}