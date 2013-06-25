#include <iostream>
#include <cstdio>

int main()
{
	using namespace std;
	
	int sum = 0;
	int ch;
	while((ch = cin.get()) != EOF )
	{
		cout << (char)ch;
		sum++;
	}
	cout << endl << sum << " characters read!\n";
}