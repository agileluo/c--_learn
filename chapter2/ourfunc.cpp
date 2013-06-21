#include <iostream>

void say(int);

using namespace std;
int main()
{
	say(3);
	int count;
	cout << "Enter a integer:";
	cin >> count;
	say(count);
	cout << "Done!" << endl;
	
}

void say(int n)
{
	cout << "agileluo say you should touch your toes " << n << " times" << endl;
}