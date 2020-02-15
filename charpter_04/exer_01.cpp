// exer_01.cpp
#include <iostream>
#include <string>
using namespace std;

const int STR_LEN = 20;
int main()
{
	char first_name[STR_LEN];
	char last_name[STR_LEN];
    char letter_grade;
	int age;
    cout << "What is your first name? ";
	cin.getline(first_name, STR_LEN + 1);
	cout << "What is your last name? ";
	cin.getline(last_name, STR_LEN + 1);
	cout << "What letter grade do you deserve? ";
    cin >> letter_grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char((int)letter_grade + 1) << endl;
	cout << "Age: " << age << endl;
    return 0;
}
