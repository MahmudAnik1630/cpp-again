#include <iostream>
using namespace std;
int main()
{

    int a = 10, b = 20;
    // logical AND
    cout << "(a > 5) && (b > 15) is " << ((a > 5) && (b > 15)) << endl; // true
    cout << "(a > 15) && (b > 15) is " << ((a > 15) && (b > 15)) << endl; // false
    // logical OR
    cout << "(a > 5) || (b > 15) is " << ((a > 5) || (b > 15)) << endl; // true
    cout << "(a > 15) || (b > 15) is " << ((a > 15) || (b > 15)) << endl; // true
    cout << "(a > 15) || (b > 25) is " << ((a > 15) || (b > 25)) << endl; // false
    // logical NOT
    cout << "!(a > 5) is " << (!(a > 5)) << endl; // false
    cout << "!(a > 15) is " << (!(a > 15)) << endl; // true

    return 0;
}