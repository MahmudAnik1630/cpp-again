#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    int ch=0;
    vec={1,2,1,4,2};
    for(int val:vec)
    {
        ch=ch^val;
    }
    cout<<"unique number is "<<ch<<endl;
    
    return 0;
}