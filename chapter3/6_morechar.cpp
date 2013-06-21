
#include <iostream>
int main()
{
	using namespace std;
	char c = 'M';
	int ic = c;
	cout << "The ASCII code for " << c << " is " << ic << endl;
	cout << "Add one to the character code:" << endl;
	
	c += 1;
	ic = c;
	cout << "The ASCII code for " << c << " is " << ic << endl;
	cout << "Display char c using cout.put(ch):";
	cout.put(c);
	cout << "!";
	cout << endl << "Done!" << endl;
}