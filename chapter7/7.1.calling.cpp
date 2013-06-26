#include <iostream>

void simple();

using namespace std;
int main()
{
	cout << "main() will call simple() function;\n";
	simple();
	
}

void simple(){
	cout << "I'm but a simple function!\n";
}