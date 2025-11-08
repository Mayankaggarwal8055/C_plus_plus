#include <iostream>
#include <climits>

using namespace std;

int maximumSubArraySum(int arr[], int n)
{

    int Csum[101];

    Csum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        Csum[i] = Csum[i - 1] + arr[i - 1];
    }

    int maxsofar = INT_MIN;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            int sum = Csum[j + 1] - Csum[i];
            maxsofar = max(maxsofar, sum);
        }
    }

    return maxsofar;
}

int main()
{

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << maximumSubArraySum(arr, n) << endl;

    return 0;
}