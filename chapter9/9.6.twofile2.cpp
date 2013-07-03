#include <iostream>

extern int tom;
static int dick = 30;
int harry = 300;


void remote_access()
{
	using namespace std;
	cout << "remoate tom = " << tom << ", &tom = " << &tom << endl;
	cout << "remoate dick = " << dick << ", &dick = "  << &dick << endl;
	cout << "remoate harry = " << harry << ", &harry = "  << &harry << endl;
}