#include<iostream>
using namespace std;




void rev(int a[],int n)
{
    int temp[n];
    int k=0;
    for(int i=n-1;i>=0;i--)
    {
        temp[k]=a[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[]={10,20,5,15,-15,25};
    int size=sizeof(a)/sizeof(a[0]);
    rev(a,size);

    return 0;
}