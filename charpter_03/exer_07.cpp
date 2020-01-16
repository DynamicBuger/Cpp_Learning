#include <iostream>
double oil_consume(double oil_litrel);
double  litrel_consume_per_100_kilometres = 0.0; 
double miles_driven_per_gallon = 0.0;
const double LITERAL_2_GALLON = 1 / 3.875;
const double KILOMETRE_2_MILE = 0.6214;

int main()
{
    using namespace std;
    cout << "Enter oil consumption per 100 kilometres in Euro style: ";
    cin >> litrel_consume_per_100_kilometres;
    
    cout << "Oil consumption in USA style: " << \
    oil_consume(litrel_consume_per_100_kilometres) << " mpg." << endl;
    return 0;
}

double oil_consume(double oil_litrel)
{
    miles_driven_per_gallon = (100 * KILOMETRE_2_MILE) / \
    (oil_litrel * LITERAL_2_GALLON);
    return miles_driven_per_gallon;
}
