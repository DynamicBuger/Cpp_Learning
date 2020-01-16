#include <iostream>
void population_ratio(long world_popu, long usa_popu);

double ratio = 0.0;
long world_popu = 0;
long usa_popu = 0;
int main()
{
    using namespace std;
    cout << "Enter the world's population: ";
    cin >> world_popu;
    cout << "Enter the population of the USA: ";
    cin >> usa_popu;
    population_ratio(world_popu, usa_popu);
    cout << "The population of the USA is " << \
    ratio << "% of the world population.\n";
    return 0;
}

void population_ratio(long world_popu, long usa_popu)
{
    ratio = usa_popu * 100.0 / world_popu;
}
