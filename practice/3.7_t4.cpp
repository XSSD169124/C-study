#include<iostream>
int main()
{
	using namespace std;
	cout << "秒数：";
	long long seconds;
	cin >> seconds;
	const int s_to_d = 86400;
	int days = seconds / s_to_d;
	int leftsecons_hours = seconds % s_to_d;
	const int s_to_h = 3600;
	int hours = leftsecons_hours / s_to_h;
	int leftseconds_min= leftsecons_hours % s_to_h;
	const int s_to_m = 60;
	int minutes = leftseconds_min / s_to_m;
	int leftseconds = leftseconds_min % s_to_m;
	cout << seconds << "seconds= " << days << "days, " << hours << "hours, " << minutes<<"minutes, "<<
		leftseconds << "seconds.";
	return 0;

}