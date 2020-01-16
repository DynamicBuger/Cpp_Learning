#include <iostream>
void scale_conversation(double mile, double kilometre, double gallon, double litrel);
void oil_consumption(double mile, double gallon);
const double MILE_2_KILOMETRE = 0.62137;
const double GALLON_2_LITREL = 4.55;
double mile = 0.0;
double kilometre = 0.0;
double gallon = 0.0;
double litrel = 0.0;
double miles_driven_per_gallon = 0.0;
double kilometres_driven_per_litrel = 0.0;
double gallons_per_100_miles = 0.0;
double litrels_per_100_kilometres = 0.0;

int main()
{
    using namespace std;
    cout << "Enter driving miles: ";
    cin >> mile;
    cout << "Enter oil consumption: ";
    cin >> gallon;
    oil_consumption(mile, gallon); 
    cout << "Miles driven per gallon: " \
         << miles_driven_per_gallon << endl;
    cout << "Kilometres driven per litrel: " \
         << kilometres_driven_per_litrel << endl;
    cout << "Oil consuming gallons per 100 miles: " \
         << gallons_per_100_miles << endl;
    cout << "Oil consuming litrels per 100 kilometres: " \
         << litrels_per_100_kilometres << endl;
    return 0;
}

void scale_conversation(double mile, double gallon)
{
    kilometre = mile * MILE_2_KILOMETRE;
    litrel = gallon * GALLON_2_LITREL;
}

void oil_consumption(double mile, double gallon)
{
    miles_driven_per_gallon = mile / gallon;
    scale_conversation(mile, gallon);
    kilometres_driven_per_litrel = kilometre / litrel;
    gallons_per_100_miles = gallon / mile * 100;
    litrels_per_100_kilometres = litrel / kilometre * 100;
}
