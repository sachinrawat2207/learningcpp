#include<iostream>
using namespace std;
int main()
{
    const float ppsr{25}, pplr{35};
    int nsr, nlr;
    const float salesTax{0.06};
   
    cout << "Enter the number of small rooms need to clean: ";
    cin >> nsr;
    cout << "Enter the number of large rooms need to clean: ";
    cin >> nlr;
    cout<<"\n";
    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Number of small rooms: " << nsr << endl;
    cout << "Number of large rooms: " << nlr << endl;
    cout << "Price per small room: $" << ppsr << endl;
    cout << "Price per large room: $" << pplr << endl;
    cout << "Cost: $" << (ppsr * nsr) + (pplr * nlr) << endl;
    cout << "Tax: $" << (ppsr * nsr * salesTax) + (pplr * nlr * salesTax) << endl;
    cout << "=========================================" << endl;
    cout << "Total estimate: $" << (ppsr * nsr) + (pplr * nlr) + (ppsr * nsr * salesTax) + (pplr * nlr * salesTax) << endl;
    cout << "This estimate is valid for 30 days" << endl;
    return 0;
}