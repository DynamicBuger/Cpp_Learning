#include <iostream>
void convert2degrees(int degree, int minute, int second);
const int FACTOR_SEC_2_DEGREE = 3600;
const int FACTOR_MIN_2_DEGREE = 60;
double degrees = 0.0;
int degree = 0;
int minute = 0;
int second = 0;

int main()
{
    using namespace std;
    cout << "Enter a latitude in degrees, minute and second:\n";
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minute of arc: ";
    cin >> minute;
    cout << "Finally, enter the second of arc: ";
    cin >> second;
    convert2degrees(degree, minute, second);
    cout << degree << " degrees, " << \
         minute << " minutes, " << \
         second << " seconds = " << \
         degrees << " degrees.\n"; 
    return 0;
}

void convert2degrees(int degree, int minute, int second)
{
    degrees = degree + minute * 1.0 / FACTOR_MIN_2_DEGREE \
            + second * 1.0 / FACTOR_SEC_2_DEGREE;    
}
