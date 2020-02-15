// init_ptr.cpp -- initialize a pointer
#include <iostream>

int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;
    pt = (int * ) 0xB8000000; // types now match
    cout << "Value of higgens = " << higgens \
         << "; address of higgens = " << &higgens \
         << endl;
    cout << "Value of *pt = " << *pt \
         << "; address of pt = " << pt << endl;
    return 0;
}
