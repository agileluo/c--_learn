#include <iostream>
#include <string>

using namespace std;

string version1(string s1, string s2);
string& version2(string& s1, string s2);


int main(){
	string input;
	string copy;
	string result;
	
	
	cout << "Enter a string: ";
	getline(cin,input);
	
	cout << "Your string as entered:" << input << endl;
	copy = version1(input, "****");
	cout << "Your string enhanced: " << copy << endl;
	cout << "Your original string: " << input << endl;
	
	copy = version2(input, "++++++");
	cout << "input address = " << &input << ", copy address = " << &copy << endl;
	cout << "Your string enhanced: " << copy << endl;
	cout << "Your original string: " << input << endl;
}

string version1(string s1, string s2){
	s1 = s2 + s1 + s2;
	return s1;
}
string& version2(string& s1, string s2){
	s1 = s2 + s1 + s2;
	return s1;
}