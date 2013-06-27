#include <iostream>

using namespace std;
const int Len = 64;
const int Divs = 6;
void subdivide(char ch[], int low, int high, int level);

int main()
{
	char rule[Len + 1];
	for(int i = 0; i < Len - 1; i++){
		rule[i] = ' '; 
	}
	rule[Len] = '\0';
	rule[0] = rule[Len-1] = '|';
	
	for(int i = 1; i <= Divs; i++){
		subdivide(rule, 0, Len, i);
		cout << rule << endl;
		for(int i = 1; i < Len -1; i++){
			rule[i] = ' ';
		}
	}
}

void subdivide(char ch[], int low, int high, int level){
	if(level <=  0) return;
	int mid = low + (high - low)/2;
	ch[mid] = '|';
	subdivide(ch, low, mid, level-1);
	subdivide(ch, mid, high, level -1);
}