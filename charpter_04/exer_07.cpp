#include <iostream>
using namespace std;
const int CHAR_LEN = 30;
int main()
{
    struct Pizza
	{
	    char company[CHAR_LEN];
		double diameter;
		double weight;
	};
	Pizza pizza;
	cout << "Enter the company of pizza: ";
	cin.get(pizza.company, CHAR_LEN).get();
    cout << "Enter the diameter of pizza: ";
	cin >> pizza.diameter;
	cout << "Enter the weight of pizza: ";
	cin >> pizza.weight;
	cout << "The name of company is " << pizza.company \
		<< ", its diameter is " << pizza.diameter << \
		" and its weight is " << pizza.weight << "\n"; 
    return 0;
}
