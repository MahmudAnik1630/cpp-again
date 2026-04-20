#include <iostream>
#include <vector>
using namespace std;

double myPow(double x, int n)
{

    double ans = 1;
    long N = n;

    while(N>0)
    {
        if(N%2==0)
        {
            x=x*x;
            N=N/2;
        }
        else{
            ans=ans*x;
            N=N-1;
        }
    }
    return ans;
}
int main()
{
    int x=2,n=10;
    cout<<myPow(x,n)<<endl;

    return 0;
}