// structunion -- struct with union definition
#include <iostream>
#include <string>
#include <cstring>

struct widget
{
    char brand[20];
    int type;
    union id // format depends on widget type
    {
        long id_num; // type 1 widgets
        char id_char[20]; // other widgets
    } id_val;
};

int main()
{
    using namespace std;
    widget price;
    if (price.type == 1)
    {
        cin >> price.id_val.id_num; // if-else statement
        cout << price.id_val.id_num;
    }
    else
    {
        cin.getline(price.id_val.id_char, strlen(price.id_val.id_char) + 1);
        cout << price.id_val.id_char;
    }
    
    return 0;
}
