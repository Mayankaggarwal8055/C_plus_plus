#include <iostream>

using namespace std;

bool f(int x[], int n, int i)
{
    // base case;

    if (i == n-1)
    {
        return true;
    }

    // recursive case

    return x[i] < x[i + 1] && f(x,n,i+1);
}

int main()
{
    int x[] = {10, 20, 30, 400, 50};

    int n = sizeof(x) / sizeof(int);

    if (f(x, n, 0))
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    };

    return 0;
}