#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name;
	cout << "Enter a word:" ;
	cin >> name;
	char temp;
	for(int i = 0, j = name.size() - 1; i < j; i++, j--){
		temp = name[i];
		name[i] = name[j];
		name[j] = temp;
	}
	cout << name;
	cout << "\nDone\n";
}