#include <iostream>
using namespace std;
const int CHAR_LEN = 20;
int main()
{
    struct CandyBar 
	{
	    char brand[CHAR_LEN];
		double weight;
		int calorie;
	};
	CandyBar snack = 
	{
	    "Mocha Munch",
		2.3,
		350
	};
	cout << snack.brand << endl;
	cout << snack.weight << endl;
	cout << snack.calorie << endl;
    return 0;
}
