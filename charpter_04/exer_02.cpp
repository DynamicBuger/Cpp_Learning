#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name;
    string dessert;
    cout << "Enter your name: ";
    getline(cin, name); // reads through newline
    cout << "Enter your favorite dessert: ";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
