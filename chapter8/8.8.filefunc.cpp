#include <iostream>
#include <fstream>

using namespace std;

void print_it(ostream& os, char name[]);

int main(){
	char name[] = "hello, agileluo";
	fstream fout;
	fout.open("file.txt");
	if(!fout.is_open()){
		cout << "file fail open!" << endl;
		return 1;
	}
	
	print_it(cout, name);
	print_it(fout, name);
	fout.close();
}

void print_it(ostream& os, char name[]){
	os << name;
}