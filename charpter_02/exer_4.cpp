#include <iostream>
using namespace std;
int monthofage(int); // function prototype

int main()
{
    cout << "Enter age: ";
    int age;
    cin >> age;
    int month = monthofage(age);
    cout << age << " years old = " << month << " months" << endl;
    return 0;
}

int monthofage(int a) // function definition
{
    return 12 * a;
}
