#include<iostream>
int main()
{
	using namespace std;
	char first_name[20];
	char last_name[20];
	char grade;
	int age;
	cout << "What's your first name?"<<endl;
	cin.getline(first_name,20);
	cout << "What's your last name"<<endl;
	cin.getline(last_name,20);
	cout << "What letter grade do you deserve?"<<endl;
	cin>>grade;
	grade++;
	cout << "What's your age?"<<'/n';
	cin >> age;
	cout << "Name:" << last_name << "," << first_name << endl;
	cout << "Grade:";
	cout.put(grade);
	cout << endl<<"Age:" << age;
	return 0;

}