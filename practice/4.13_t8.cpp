#include<iostream>
#include<string>
int main()
{
    using namespace std;
    struct CandyBar
    {
      string brand;
      float mass;
      int calorie;
    };
    CandyBar* ps = new CandyBar[3];
    ps[0] = { "Aa",1.1,200};
    ps[1] = {"Bb",2.2,300};
    ps[2] = { Cc,3.3,400 };
    cout << ps[0].brand << "," << ps[0].mass << "," << ps[0].calorie << endl;
    cout << *(ps + 1).brand << "," << *(ps + 1).mass << "," << *(ps + 1).calorie << endl;
    cout << ps[2].brand << "," << ps[2].mass << "," << ps[2].calorie << endl;
    return 0;
};
