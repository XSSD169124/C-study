#include<iostream>
void time(int m, int n)
{
	std::cout << "Time:" << m << ":" << n;
}
int main()
{
	using namespace std;
	cout << "请输入小时";
	int hour;
	cin >> hour;
	cout << "请输入分钟";
	int minute;
	cin >> minute;
	time(hour, minute);
}