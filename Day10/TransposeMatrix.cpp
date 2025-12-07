#include <iostream>
#include <algorithm>

using namespace std;

void transposeMatrix(int arr[][3], int m, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
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

    transposeMatrix(arr, m, n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}