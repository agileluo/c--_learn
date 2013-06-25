#include <iostream>

int main()
{
	using namespace std;
	
	int sum = 0;
	char ch;
	cin.get(ch);
	while(cin.fail() == false)
	{
		cout << ch;
		sum++;
		cin.get(ch);
	}
	cout << sum << " characters read!\n";
}