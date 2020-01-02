#include <iostream>
int long2yard(int); // function prototype
using namespace std;

int main()
{
    cout << "Enter long: ";
    int ilong;
    cin >> ilong;
    int yard = long2yard(ilong);
    cout << ilong << " long = ";
    cout << yard << " yard" << endl;
    return 0;
}

int long2yard(int l)
{
    return 220 * l;
}
