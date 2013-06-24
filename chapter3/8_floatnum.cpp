#include <iostream>
const float MILLION = 1.0e6;

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	
	float work = 10.0 / 3.0;
	double detailWork = 10.0 / 3.0;
	
	cout << " work = " << work << ", a million works = " << work * MILLION 
		 << ", and ten million works = " << 10 * MILLION * work << endl;
	cout << " detailWork = " << detailWork << ", and a million detailWork = " 
		 << detailWork * MILLION << endl;
}