#include <iostream>
#include <climits>

using namespace std;

int maximumSubArraySum(int arr[], int n)
{

    int maxSoFar = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            maxSoFar = max(maxSoFar, sum);
        }
    }

    return maxSoFar;
}

int main()
{

    int arr[]{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    cout << maximumSubArraySum(arr, n) << endl;

    return 0;
}