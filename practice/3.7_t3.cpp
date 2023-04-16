#include<iostream>
int main()
{
	using namespace std;
	cout << "请输入一个地点的维度：\n";
	cout << "输入度数：";
	int degrees;
	cin >> degrees;
	cout << "输入分数:";
	int minutes;
	cin >> minutes;
	cout << "输入秒数:";
	int seconds;
	cin >> seconds;
	const float huansuan = 60;
	float result = degrees + (minutes + (seconds / huansuan)) / huansuan;
	cout << "该维度：" << degrees << "度，" << minutes << "分，" << seconds << "秒。" << "是" << result << "度";
	return 0;
}