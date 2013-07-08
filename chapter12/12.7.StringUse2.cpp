#include <iostream>
#include <cstdlib>
#include <ctime>
#include "12.4.String.h"

const int arrSize = 10;
const int Maxlen = 81;


int main()
{
	using namespace std;
	String name;
	cout << "Hi, what's your name?\n<< ";
	cin >> name;
	cout << name << ", please enter your " << arrSize << " favorite things:	" << endl;
	String favs[arrSize];
	int total = 0;
	char temp[Maxlen];
	for(int i = 0; i < arrSize; i++){
		cout << i + 1 << ": " ;
		cin.get(temp, Maxlen);
		while(cin && cin.get() != '\n'){
			continue;
		}
		if( !cin || temp[0] == '\0' ){
			break;
		}else{
			favs[i] = temp;
		}
		total++;
	}
	if(total > 0){
		cout << "Here are your saying: " << endl; 
		for(int i = 0; i < total; i++){
			cout << favs[i] << endl;
		}
		String* shortest = &favs[0];
		for(int i = 1; i < total; i++){
			if( favs[i].length() < shortest->length() ){
				shortest = &favs[i];
			}
		}
		cout << "shortest favs: " << endl;
		cout << *shortest << endl;
		
		srand(time(0));
		int choice = rand() % total;
		cout << choice << endl;
		String* favorite = new String(favs[choice]);
		cout << "Most favorite: " << endl;
		cout << *favorite << endl;
		delete favorite;
	}
	
}