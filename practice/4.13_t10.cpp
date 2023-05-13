#include<iostream>
#include<array>
const int arsize = 3;
int main()
{
	using namespace std;
	array<float, arsize>time;
	cout<< "三次100米成绩是？\n";
	cin >> time[0];
	cin >> time[1];
	cin >> time[2];
	float averagetime = (time[0] + time[1] + time[2]) / arsize;
	cout << "平均时间是：" << averagetime;
	return 0;
};