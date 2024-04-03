#include<iostream>
using namespace std;
// Primitive data types 
int main()
{
    int a = 10;
    double b = 20;
    // char c = 'A'; //Use only single quotes for char
    char c{'A'};
    bool d = true;
    long e = 1'000'000'000; // ':c++ 11 stantdard
    cout << a << " " << b<< " " << c << " " << d << endl;
    cout<<e<<endl;
    return 0;
}