#include<iostream>
int main()
{
	using namespace std;
	cout << "请输入驱车里程(以公里为单位)：";
	float ou_distance;
	cin >> ou_distance;
	cout << "请输入使用汽油量(以升为单位)：";
	float ou_gasoline_usage;
	cin >> ou_gasoline_usage;
	float oushi_haoyouliang = (ou_gasoline_usage * 100) / ou_distance;
	float mei_distance = ou_distance * 0.6214;
	float mei_gasoline_usage = ou_gasoline_usage / 3.875;
	float meishi_haoyouliang = mei_distance / mei_gasoline_usage;
	cout << "欧洲风格耗油量" << oushi_haoyouliang << " 升每100公里"<<endl;
	cout << "美国风格耗油量" << meishi_haoyouliang << " 英里每加仑";
	return 0;
}