#include <iostream>

double cube(double a);
double refcube(double& a);

int main(){
	using namespace std;
	double a = 3;
	
	cout << cube(a) ;
	cout << " = cube of " << a << endl;
	cout << refcube(a) ;
	cout << " = refcube of " << a << endl;
	
	
}

double cube(double a){
	a *= a * a;
	return a;
}

double refcube(double& a){
	a *= a * a;
	return a;
}