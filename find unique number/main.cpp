#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 4, 2, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result ^= arr[i];
    }

    cout << "Unique number is: " << result << endl;

    return 0;
}