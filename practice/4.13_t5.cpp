#include<iostream>
#include<string>
const int arsize = 20;
int main()
{
    using namespace std;
    struct CandyBar
    {
        string brand;
        float mass;
        int calorie;
    };
    CandyBar snack = { "Mocha Munch",2.3,350 };
    cout << "snack's brand is " << snack.brand << endl;
    cout << "snack's mass is " << snack.mass << endl;
    cout << "snack's calorie is " << snack.calorie << endl;
    return 0;
};