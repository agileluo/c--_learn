#include <iostream>

int c_in_str(const char * str, char c);

int main()
{
	using namespace std;
	
	char str1[]	= "I come form china! ooo!";
	char str2[] = "uubox, I know you!";
	
	char c1 = 'o';
	char c2 = 'u';
	
	cout << c_in_str(str1, c1) << " " << c1 << " in " << str1 << endl; 
	cout << c_in_str(str2, c2) << " " << c2 << " in " << str2 << endl; 
}


int c_in_str(const char * str, char c){
	int result = 0;
	while(*str != '\0'){
		if(*str == c ){
			result++;
		}
		str++;
	}
	return result;
}