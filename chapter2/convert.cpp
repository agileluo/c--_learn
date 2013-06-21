
#include <iostream>

int stoneTolb(int);

int main()
{
	using namespace std;
	
	cout << "Enter the weight in stone: ";
	int stone;
	cin >> stone;
	cout << stone << " stone = " << stoneTolb(stone) << " pounds.";
}

int stoneTolb(int n)
{
	return n * 14;
}