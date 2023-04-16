#include<iostream>
double diaoyoungdehanshu(double n)
{
	return 1.8 * n + 32.0;
}
int mian()
{
	using namespace std;
	cout << "please enter a celsius value"；
		cin >> n;
	cout << n << "degrees is" << diaoyoungdehanshu(n) << "degrees F";
	return 0
}