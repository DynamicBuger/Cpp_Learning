#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int STR_LEN = 20;
	char first_name[STR_LEN];
	char last_name[STR_LEN];
    cout << "Enter your first name: ";
	cin.getline(first_name, STR_LEN);
	cout << "Enter your last name: ";
	cin.getline(last_name, STR_LEN);
	cout << "Here's the information in a single string: " \
		<< last_name << ", " << first_name << endl;
    return 0;
}
