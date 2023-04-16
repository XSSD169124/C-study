#include<iostream>
double diaoyoungdehanshu(double n)
{
	return 1.8 * n + 32.0;
}
int main()
{
	using namespace std;
	cout << "please enter a celsius value ";
	double shuzi;
	cin >> shuzi;
	cout << shuzi << " degrees is " << diaoyoungdehanshu(shuzi) << " degrees F";
	return 0;
}