#include <iostream>

int xyz = 123;

using namespace std;

void update(int n);
void local();

int main()
{
	cout << "Global xyz is " << xyz << endl;
	update(23);
	cout << "Global xyz is " << xyz << endl;
	local();
	cout << "Global xyz is " << xyz << endl;
}


void update(int n){
	extern int xyz;
	xyz = n;
	cout << "updating gloable xyz is " << xyz << endl;
}

void local(){
	int xyz = 112;
	cout << "local xyz is " << xyz << endl;;
	cout << "but global xyz is " << ::xyz << endl;;
}