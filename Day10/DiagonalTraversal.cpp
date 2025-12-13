#include <iostream>
#include <algorithm>

using namespace std;

void printDiag(int arr[][3], int m, int n, int i, int j)
{
    while (i < m and j < n)
    {
        cout << arr[i][j] << " " ;
        i++;
        j++;
    }

    cout << endl;
}

void DiagonalTraversal(int arr[][3], int m, int n)
{

    for (int j = 0; j < n; j++)
    {
        printDiag(arr, m, n, 0, j);
    }

    for (int i = 1; i < m; i++)
    {
        printDiag(arr, m, n, i, 0);
    }
};

int main()
{

    int arr[][3] = {{10, 20, 30},
                    {40, 50, 60},
                    {70, 80, 90}};

    int m = 3;
    int n = 3;

    DiagonalTraversal(arr, m, n);

    return 0;
}