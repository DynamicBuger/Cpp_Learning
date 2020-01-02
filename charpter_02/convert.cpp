// convert.cpp -- converts stone to pounds
#include <iostream>
int stone2lb(int); // function prototype

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stone2lb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds" << endl;
    return 0;
}

int stone2lb(int sts)
{
    return 14 * sts;
}
