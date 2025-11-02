#include <iostream>

using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    int k = 11;
    k = k % n;

    // part 1

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // part 2

    i = 0;
    j = k - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // part 3
    i = k;
    j = n - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
