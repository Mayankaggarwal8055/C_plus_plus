#include <iostream>

using namespace std;

void wavePrint(int arr[][3], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
        }

        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
};

int main()
{

    int arr[][3] = {{10, 20, 30},
                    {40, 50, 60},
                    {70, 80, 90}};

    int m = 3;
    int n = 3;

    wavePrint(arr, m, n);

    return 0;
}