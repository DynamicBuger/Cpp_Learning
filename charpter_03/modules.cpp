// modules.cpp -- use % operator to convert lbs to stone
#include <iostream>
int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn; // whone stone
	int pound = lbs % Lbs_per_stn; // reminder in pounds
	cout << lbs << " pounds are " << stone << " stone(s), " \
		<< pound << " pound(s).\n";
	return 0;
}
