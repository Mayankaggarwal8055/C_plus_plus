#include <iostream>
#include <algorithm>

using namespace std;

bool SortedMatrixSearch1(int arr[][3], int m, int n, int t)
{

    for (int i = 0; i < m; i++)
    {
        if (binary_search(arr[i], arr[i] + n, t))
        {
            return true;
        }
    }

    return false;
};

int main()
{

    int arr[][3] = {{10, 20, 30},
                    {40, 50, 60},
                    {70, 80, 90}};

    int m = 3;
    int n = 3;

    int t = 100;
    cout << SortedMatrixSearch1(arr, m, n, t);

    return 0;
}