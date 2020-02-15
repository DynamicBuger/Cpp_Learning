// newdelete.cpp -- using new and delete operator
#include <iostream>
#include <cstring>

using namespace std;
char * getname(void); // function prototype

int main()
{
    char * name; // create pointer but no storage
    name = getname(); // assign address of string to name
    cout << name << " at " << (int *)name << endl;
    delete[] name; // memory freed

    name = getname(); // reuse freed memory
    cout << name << " at " << (int *)name << endl;
    delete[] name; // memory freed again
    return 0;
}

char * getname() // return pointer to new string
{
    char tmp[20]; // temporary storage
    cout << "Enter last name: ";
    cin >> tmp;
    char * pn = new char[strlen(tmp) + 1]; 
    strcpy(pn, tmp); // copy string into smaller space
    return pn; // tmp lost when function ends
}
