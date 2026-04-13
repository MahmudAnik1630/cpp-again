#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int a = 5, b = 3,c=198;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout<< "a << 1 = " << (a << 1) << endl;
    cout<< "a >> 1 = " << (a >> 1) << endl;

    cout << "Number of digits in c = " << (int)log10(c) + 1 << endl;
    return 0;
}