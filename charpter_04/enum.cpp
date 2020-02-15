// enum.cpp -- enumerate definition
#include <iostream>

enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

int main()
{
    using namespace std;
    spectrum color;
    color = indigo;
    cout << "indigo in spectrum = " << color << endl;
    return 0;
}
