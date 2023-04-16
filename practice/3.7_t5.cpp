#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the world's populantion";
	long long world_population;
	cin >> world_population;
	cout << "Enter the population of the USA";
	long long USA_population;
	cin >> USA_population;
	double percent = double(USA_population)/double(world_population) ;
	cout << "The population of the US is " << percent *100<< "% of the world population.";
	return 0;
}