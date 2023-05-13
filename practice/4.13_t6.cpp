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
    CandyBar Bar[3] =
    {
        {"Aa",1.1,200},
        {"Bb",2.2,300},
        {"Cc",3.3,400}
    };
    cout << Bar[0].brand << "," << Bar[0].mass << "," << Bar[0].calorie << endl;
    cout << Bar[1].brand << "," << Bar[1].mass << "," << Bar[1].calorie << endl;
    cout << Bar[2].brand << "," << Bar[2].mass << "," << Bar[2].calorie << endl;
    return 0;
};