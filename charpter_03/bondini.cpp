// bondini.cpp -- using escape sequences
#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:______\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	wchar_t bob = L'P';
	wcout << bob << endl;
	wcout << L"tall" << endl;
	return 0;
}
