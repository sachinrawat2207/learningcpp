//sizeof operator
#include<iostream>
#include<climits> //limits for integer data types
/* INT_MIN, INT_MAX etc. are macros defined in this header file
   which gives the minimum and maximum values that can be stored in the integer data types
*/
#include<cfloat> //limits for float data types
/* FLT_MIN, FLT_MAX etc. are macros defined in this header file
   which gives the minimum and maximum values that can be stored in the float data types
*/

using namespace std;
int main()
{
    int a = 10;
    double b = 20;
    char c = 'A'; //Use only single quotes for char
    bool d = true;
    long e = 1'000'000'000; // ':c++ 11 stantdard
    cout << "size of information"<<endl;
    cout << "========================================="<<endl;
    cout << "Size of int: " << sizeof(int) << endl; // directly extracting the size of the data type
    cout << "Size of int: " << sizeof(a) << endl;
    cout << "Size of double: " << sizeof(b) << endl;
    cout << "Size of char: " << sizeof(c) << endl;
    cout << "Size of bool: " << sizeof(d) << endl;
    cout << "Size of long: " << sizeof(e) << endl;
    
    cout << "========================================="<<endl;
    cout << "Minimum values"<<endl;
    cout << "========================================="<<endl;
    cout << "Minimum value of int: " << INT_MIN << endl;
    cout << "Minimum value of double: " << DBL_MIN << endl;
    cout << "Minimum value of char: " << CHAR_MIN << endl;
    cout << "Minimum value of bool: " << false << endl;
    cout << "Minimum value of long: " << LONG_MIN << endl;

    return 0;
}