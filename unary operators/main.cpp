#include <iostream>
using namespace std;
int main()
{

    int a =10;
    int b= a++;

    int c=15;
    int d= ++c;


    cout<< "b = "<<b<<endl;
    cout<< "a = "<<a<<endl;

    cout << "d = " << d << endl;
    cout << "c = " << c << endl;
    return 0;
}