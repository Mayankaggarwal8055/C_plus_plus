#include <iostream>
#include <algorithm>

using namespace std;

bool SortedMatrixSearch2(int arr[][3], int m, int n, int t)
{

    int i = 0;
    int j = n - 1;
    while (i < m and j >= 0)
    {

        if (arr[i][j] == t)
        {
            return true;
        }
        else if (t > arr[i][j])
        {
            i++;
        }
        else
        {
            j--;
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

    int t = 10;
    cout << SortedMatrixSearch2(arr, m, n, t);

    return 0;
}