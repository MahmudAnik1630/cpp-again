#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* ptr=&a;
    int**ptr2=&ptr;
    cout<<"The address of a is "<<ptr<<endl;
    cout<<"The value of a is "<<*ptr<<endl;
    cout<<"The address of ptr is "<<ptr2<<endl;
    cout<<"The value of ptr is "<<*ptr2<<endl;
    cout<<"The value of a using ptr2 is "<<**ptr2<<endl;
    return 0;
}