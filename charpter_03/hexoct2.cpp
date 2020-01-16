// hexoct2.cpp -- display values in hex and octal
#include <iostream>
int main()
{
	using namespace std;
	int cheest = 42; 
	int waist = 42; 
	int inseam = 42; 
	cout << "Monsieur cuts a striking figure!\n";
	cout << "cheest = " << cheest << " (decimal for 42)\n";
	cout << hex; // manipulator for changing number base
	cout << "waist = " << waist << " (hexadecimal for 42)\n";
	cout << oct; // manipulator for changing number base
	cout << "inseam = " << inseam << " (octal for 42)\n";

	return 0;
}
