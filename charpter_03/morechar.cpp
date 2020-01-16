// morechar.cpp -- the char type and int type contrasted
#include <iostream>
int main()
{
	using namespace std;
	char ch = 'M'; // assign ASCII code for M to ch
	int i = ch; // store same code in an int
	cout << "The ASCII code for " << ch << " is " \
		<< i << endl;
	cout << "Add one to the character code: " << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " \
		<< i << endl;
	// using the cout.put() member function to display a char
	cout << "Displaying char ch using cout.put(ch): ";
	cout.put(ch);
	// using cout.put() to display a char constant
	cout.put('!');
	cout << endl << "Done" << endl;
	cout << '$' << endl;
	cout.put('$') << endl;
	char alarm = '\a';
	cout << alarm << "Don't do that again!\a\n";
	cout << "Ben \"Buggsie\" Hacker\n was here!\n";
	return 0;
}
