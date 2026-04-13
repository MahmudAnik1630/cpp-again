#include<iostream>
using namespace std;


int sum_of_digit(int num)
{
    int sum = 0;
    while(num>0)
    {
       
        int red=num%10;
        sum=sum+red;
        num=num/10;

    }
    return sum;

}
int main()
{
    int number;
    cin>>number;
    cout<<"The sum of digit of "<<number<<" is "<<sum_of_digit(number)<<endl;
}