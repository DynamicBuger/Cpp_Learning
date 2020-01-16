#include <iostream>
void secs_conversation(int secs);
const int SEC_2_DAY = 24 * 60 * 60;
const int SEC_2_HOU = 60 * 60;
const int SEC_2_MIN = 60;
long long seconds = 0;
int days = 0;
int hous = 0;
int mins = 0;
int secs = 0;

int main()
{
    using namespace std;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    secs_conversation(seconds);
    cout << seconds << " seconds = " << days \
    << " days, " << hous << " hours, " << mins \
    << " minutes, " << secs << " seconds\n";
    return 0;
}

void secs_conversation(int seconds)
{
    days = seconds / SEC_2_DAY; 
    hous = seconds % SEC_2_DAY / SEC_2_HOU;
    mins = seconds % SEC_2_HOU / SEC_2_MIN;
    secs = seconds % SEC_2_MIN;
}
