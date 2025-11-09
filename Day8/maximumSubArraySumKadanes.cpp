#include <iostream>
#include <climits>

using namespace std;

int maximumSubArraySum(int arr[], int n)
{

    int x[100];

    x[0] = arr[0];
    int maxsofar = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        x[i] = max(x[i - 1] + arr[i], arr[i]);
        maxsofar = max(maxsofar, x[i]);
    }
    return maxsofar;
}

int maximumSubArraySumSpace(int arr[], int n)
{

    int x = arr[0];
    int maxsofar = x; 

    for (int i = 1; i < n; i++)
    {
        x = max(x + arr[i], arr[i]);
        maxsofar = max(maxsofar, x);
    }
    return maxsofar;
}

int main()
{

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << maximumSubArraySum(arr, n) << endl;
    cout << maximumSubArraySumSpace(arr, n) << endl;

    return 0;
}