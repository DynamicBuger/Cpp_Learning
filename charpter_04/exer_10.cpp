#include <iostream>
#include <array>
using namespace std;
const int TIMES = 3;

int main()
{
	double grade_total = 0.0;
    array<double, 3> grade;
	for(int i = 1; i <= TIMES; i++)
	{
	    cout << "Enter grade " << i << " for 40 miles' run: ";
	    cin >> grade[i - 1];
		cout << "Grade " << i << " is " << grade[i - 1] << endl;
	    grade_total += grade[i - 1];
	}
    cout << "Average grade is " << grade_total / TIMES << endl;
    return 0;
}
