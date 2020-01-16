#include <iostream>
using namespace std;

const int FACTOR_INCH_2_FEET = 12;
void inch2feetandinch(int inch);
int height = 0;
int feet = 0;
int inch = 0;
int inches = 0;
int main()
{
    cout << "Enter height(inch):__\b\b";
    cin >> inch;
    inch2feetandinch(inch);
    cout << inch << " inches = " << feet \
    << " feet and " << inches << " inches.\n";
    return 0;
}

void inch2feetandinch(int inch)
{
    feet = inch / FACTOR_INCH_2_FEET;
    inches = inch % FACTOR_INCH_2_FEET;
}
