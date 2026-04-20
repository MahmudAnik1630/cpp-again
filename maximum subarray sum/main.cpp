#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec = { 10, 20, 5, 15, -15, 25 };
    int max_sum=0;
    int current_sum=0;

    for (int val : vec)
    {
        current_sum= current_sum + val;
        max_sum=max(max_sum,current_sum);
        if(current_sum<0)
        {
            current_sum=0;
        }

    }

    cout<<"Maximum subarray sum is "<<max_sum<<endl;
    
    return 0;
}   