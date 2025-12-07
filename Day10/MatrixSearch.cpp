#include <iostream>
#include <algorithm>

using namespace std;

bool MatrixSearch(int arr[][3], int m, int n, int t)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (arr[i][j] == t)
            {
                return true;
            }
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
    cout << MatrixSearch(arr, m, n, t);

    return 0;
}