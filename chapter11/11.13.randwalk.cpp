#include <iostream>
#include <cstdlib>
#include <ctime>
#include "11.13.vect.h"

int main(){
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	
	int steps = 0;
	double target = 50;
	double dstep = 2;
	
	while(result.magVal() < target){
		direction = rand() * 360;
		step.set(dstep, direction, 'p');
		result = result + step;
		steps++;
	}
	
	cout << "After " << steps << "steps, the subject has the following location: " << endl;
	cout << result;
		
}