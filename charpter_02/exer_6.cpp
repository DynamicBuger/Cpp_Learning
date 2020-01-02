#include <iostream>
using namespace std;

double Lightyear2Astronomicalunit(double lightyear);

int main()
{
    double lightyear;
    cout << "Enter the number of light year: ";
    cin >> lightyear;
    cout << lightyear << " light years = " << Lightyear2Astronomicalunit(lightyear) \
    << " astronomical units." << endl;
    return 0;
}

double Lightyear2Astronomicalunit(double lightyear)
{
    return lightyear * 63240;
}
