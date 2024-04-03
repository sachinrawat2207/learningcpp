#include<iostream>
using namespace std;
int main()
{
    const float ppr{30};
    int nr;
    const float salesTax{0.06};
    cout << "Enter the number of rooms need to clean: ";
    cin >> nr;
    cout<<"\n";
    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Number of rooms: " << nr << endl;
    cout << "Price per room: $" << ppr << endl;
    cout << "Cost: $" << ppr * nr << endl;
    cout << "Tax: $" << ppr * nr * salesTax << endl;
    cout << "=========================================" << endl;
    cout << "Total estimate: $" << (ppr * nr) + (ppr * nr * salesTax) << endl;
    cout << "This estimate is valid for 30 days" << endl;
    return 0;
}