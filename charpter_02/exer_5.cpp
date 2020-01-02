#include <iostream>
using namespace std;

double Celsius2Fahrenheit(double celsius);

int main()
{
    double celsius = 0.0;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << Celsius2Fahrenheit(celsius) \
    << " degrees Falrenheit." << endl;
    return 0;
}

double Celsius2Fahrenheit(double celsius)
{
    return celsius * 1.8 + 32.0;
}
