#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec={10,20,5,15,-15,25};
    vec.pop_back();
    cout<<"vector size "<< vec.size()<<endl;
    vec.push_back(30);
    for (int val :vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;


    cout<<"element at last "<<vec.back()<<endl;
    cout<<"element at first "<<vec.front()<<endl;
    cout<<"element at index 2 "<<vec.at(2)<<endl;

    return 0;
}