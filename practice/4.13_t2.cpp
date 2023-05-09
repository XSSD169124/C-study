#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string name;
	string dessert;
	cout << "Enter your name: " ;
	getline(cin,name);
	cout << "Enter your favorite dessert: ";
	getline(cin, dessert);
	cout << "i have some delicious " << dessert;
	cout << " for you," << name << "." << endl;
	return 0;

}