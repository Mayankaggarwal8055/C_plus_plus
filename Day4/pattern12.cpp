#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int m = n / 2;

    // first part

    for (int i = 1; i <= n; i++)
    {
        cout << " * ";
    }
    cout << endl;

    // second part

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << " * ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "   ";
        }

        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // third part

    for (int i = 1; i <= m - 1; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << " * ";
        }

        for (int j = 1; j <= 2 * (m - i) - 1; j++)
        {
            cout << "   ";
        }

        for (int j = 1; j <= i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // fourth part

    for (int i = 1; i <= n; i++)
    {
        cout << " * ";
    }

    return 0;
}