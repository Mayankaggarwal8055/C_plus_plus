#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {

        int minidx = i;

        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }

        swap(arr[i], arr[minidx]);
    }
}

int main()
{

    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}