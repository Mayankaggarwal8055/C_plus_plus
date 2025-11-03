#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {

        bool flag = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                bool flag = true;
            }
        }

        if (flag == false)
        {
            break;
        }
        }
}

int main()
{

    int arr[] = {50, 30, 40, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}