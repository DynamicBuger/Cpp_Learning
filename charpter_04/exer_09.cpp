#include <iostream>
using namespace std;
const int CHAR_LEN = 20;

struct CandyBar
{
    char brand[CHAR_LEN];
    float weight;
	int calorie;
};

int main()
{
	// Create and initialize dynamic array of pointer
    CandyBar *snack = new CandyBar[3]
	{
	    { "Mocha Munch", 2.3, 350 },
	    { "Chewing sugar", 1.5, 250 },
	    { "hard candy", 2.8, 321 }
	};
	cout << snack[0].brand << ", " << snack[0].weight << ", " << snack[0].calorie << endl;
	cout << (*(snack + 1)).brand << ", " << (*(snack + 1)).weight << ", " << (*(snack + 1)).calorie << endl;
	cout << (snack + 2) -> brand << ", " << (snack + 2) -> weight << ", " << (snack + 2) -> calorie << endl;
	delete[] snack;
	return 0;
}
