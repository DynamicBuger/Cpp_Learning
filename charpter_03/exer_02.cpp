#include <iostream>
#include <cmath>
using namespace std;

void index_conversation(int feet, int inch, double pound);
void bmi_calculation(double meter, double kg);
const int FACTOR_FEET_2_INCH = 12;
const double FACTOR_INCH_2_METER = 0.0254;
const double FACTOR_POUND_2_KG = 1 / 2.2;
int feet = 0;
int inch = 0;
int inches = 0;
double meter = 0.0;
double pound = 0.0;
double kg = 0.0;
double bmi = 0.0;

int main()
{
    cout << "Enter height:\nFeet: ";
    cin >> feet;
    cout << "Inch: ";
    cin >> inch;
    cout << "Enter weight:\nPound: ";
    cin >> pound;
    index_conversation(feet, inch, pound);
    bmi_calculation(meter, kg);
    cout << "Height: " << feet << " feet, " << inch << \
    " inches.\n";
    cout << "Height: " << inches << " inches.\n";
    cout << "Height: " << meter << " meters.\n"; 
    cout << "Weight: " << pound << " pounds.\n";
    cout << "Weight: " << kg << " kilograms\n";
    cout << "BMI: " << bmi << endl;
    return 0;
}

void index_conversation(int feet, int inch, double pound)
{
    inches = feet * FACTOR_FEET_2_INCH + inch;
    meter = inches * FACTOR_INCH_2_METER;
    kg = pound * FACTOR_POUND_2_KG;
}

void bmi_calculation(double meter, double kg)
{
    bmi = kg / pow(meter, 2);
}
