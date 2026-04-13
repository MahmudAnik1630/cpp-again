#include <iostream>
using namespace std;

long long nCr(int n, int r)
{
    if (r > n || r < 0)
        return 0;

    if (r > n - r) 
        r = n - r;

    long long res = 1;

    for (int i = 0; i < r; i++)
    {
        res = res * (n - i) / (i + 1);
    }

    return res;
}

int main()
{
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    cout << "nCr is " << nCr(n, r) << endl;

    return 0;
}