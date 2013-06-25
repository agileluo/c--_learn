#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	
	int seconds;
	cout << "Enter the seconds:";
	cin >> seconds;
	
	clock_t delay = seconds * CLOCKS_PER_SEC;
	clock_t start = clock();
	while(clock() - start < delay)
		;
	cout << "Done\n" ;
}