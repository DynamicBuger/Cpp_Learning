// arrstruc.cpp -- an array of structures
#include <iostream>

struct inflatable
{
    char name[20];
    double volume;
    double price;
};

struct torgle_register
{
    unsigned int SN : 4; // 4 bits for SN value
    unsigned int : 4; // 4 bits unused
    bool goodIn : 1; // valid input (1 bit)
    bool goodTorgle : 1; // successful torgling
};

int main()
{
    using namespace std;
    inflatable guests[2] = // initializing an array of structs
    {
        {"Bambi", 0.5, 21.99}, // first structure in array
        {"Godzilla", 2000, 565.99} // next structure in array
    };
    cout << "The guests " << guests[0].name << " and " << \
    guests[1].name << " have a combined volume of " << \
    guests[0].volume + guests[1].volume << " cubic feet.\n";
    torgle_register tr = {14, true, true};
    if (tr.goodIn)
    {
        cout << "tr in goodIn\n";

    }
    return 0;
}
