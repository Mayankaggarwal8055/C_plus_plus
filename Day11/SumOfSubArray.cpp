#include <iostream>

using namespace std;

int f(int x[], int n, int i)
{
    // base case;

    if (i == n - 1)
    {
        return x[n - 1];
    }

    // recursive case

    int A = f(x, n, i + 1);

    return x[i] + A;
}

int main()
{
    int x[] = {10, 20, 30, 40, 50};

    int n = sizeof(x) / sizeof(int);

    cout << f(x, n, 0);

    return 0;
}