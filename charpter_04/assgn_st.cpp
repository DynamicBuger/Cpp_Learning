// assgn_st.cpp -- assigning structures
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

struct perks
{
    double x; // two members
    double y;
} position = 
{
    1.0,
    2.0
};

int main()
{
    using namespace std;
    inflatable bouquet = 
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    choice = bouquet; // assign one structure to another
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    cout << "position: [" << position.x << ", " << \
         position.y << "]\n";
    return 0;
} 
