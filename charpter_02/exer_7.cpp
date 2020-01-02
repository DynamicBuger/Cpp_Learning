#include <iostream>
using namespace std;
void GetTime(int hours, int minutes);

int main()
{
    int hours = 0;
    int minutes = 0;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    GetTime(hours, minutes);
    return 0;
}

void GetTime(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}
