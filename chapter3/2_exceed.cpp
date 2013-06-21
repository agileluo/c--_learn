
#include <iostream>
#include <climits>
#define ZERO 0

int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = SHRT_MAX;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Add $1 each account!" << endl;
	sam += 1; sue += 1;
	cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	
	
	sam = ZERO; sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Take $1 from each account!" << endl;
	sam -= 1; sue -= 1;
	cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
	cout << "Luck Sue!" << endl;
	
}