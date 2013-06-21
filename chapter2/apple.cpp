
#include <iostream>
int main()
{
	using namespace std;
	
	int apples;
	
	apples = 4;
	cout << "I have ";
	cout << apples;
	cout << " apples.";
	cout << endl;
	
	apples = apples -1; //I eat one
	cout << "I eat one, now I have " << apples << " apples." << endl;
	return 0;
}