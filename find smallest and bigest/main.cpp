#include<iostream>
using namespace std;

void findME(int a[],int n)
{
    int smallest=a[0];
    int smallest_index=0;
    int biggest=a[0];
    int biggest_index=0;
    for( int i = 0 ;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
            smallest_index=i;
        }
        if (a[i] > biggest)
        {
            biggest = a[i];
            biggest_index=i;
        }
    }
    cout << "Smallest: " << smallest << " at index " << smallest_index << endl;
    cout << "Biggest: " << biggest << " at index " << biggest_index << endl;

}


int main()
{
    int a[]={10,20,5,15,-15,25};
    int size=sizeof(a)/sizeof(a[0]);
    findME(a,size);
    cout<<"array size " << size << endl;
    return 0;
}