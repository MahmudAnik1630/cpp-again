#include <iostream>
using namespace std;

void findME(int a[], int n,int ch)
{
    int count=0;
    
    for (int i = 0; i < n; i++)
    {
        if(ch==a[i])
        {
            count++;
            
            
        } 
        
        
    }
    if(count>0)
    {
        cout<<"Element found "<<count<<" times in the array "<<endl;
    }
    else
    {
        cout<<"Element not found in the array "<<endl;
    }

}

int main()
{
    int a[] = {10, 20, 5, 15, -15, 25};
    int ch=-15;
    int size = sizeof(a) / sizeof(a[0]);
    findME(a, size,ch);
    return 0;
}