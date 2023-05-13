#include<iostream>
#include<string>
const int arsize = 20;
int main()
{
	using namespace std;
	cout << "enter your first name\n";
	char firstname[arsize];
	cin.getline(firstname, arsize);
	cout << "enter your last name\n";
	string lastname;
	getline(cin, lastname);
	cout << "here's a information in a single string " << firstname << "," << lastname << endl;
	return 0;
};