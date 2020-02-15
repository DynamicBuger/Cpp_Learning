// numstr.cpp -- following number input with line input
#include <iostream>
int main()
{
    using namespace std;
    const int NUM = 80;
    int year;
    char address[NUM];
    cout << "What year was your house built?\n";
    (cin >> year).get(); // get year and newline
    cout << "What is the street address?\n";
    cin.getline(address, NUM);
    cout << "Year Built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}
