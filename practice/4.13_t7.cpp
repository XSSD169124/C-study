#include<iostream>
#include<string>
int main()
{
    using namespace std;
    struct Pizza 
    {
      char brand[20];
      float mass;
      float diameter;
    };
    cout << "Pizaa's brand: " << endl;
    Pizza user1;
    cin.getline(user1.brand,20);
    cout << "mass: " << endl;
    cin >> user1.mass;
    cout << "diameter" << endl;
    cin >> user1.diameter;
    cout << "your information:\n" << user1.brand << endl<<user1.mass <<endl<< user1.diameter;
    return 0;
}