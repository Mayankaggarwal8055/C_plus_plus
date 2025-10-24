#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n = INT32_MAX;

    int x = 154845101;

    if (n == 0)
    {
        cout << n;
    }
    else if (n == 1)
    {
        cout << n;
    }
    else
    {
        int a = 0;
        int b = 1;
        int i = 1;

        while (i <= n - 1)
        {
            int c = a + b;
            a = b;
            b = c;

            i = i + 1;

            if (b == x)
            {
                cout << "it is a fibonacci number" << endl;
                break;
            }
            else if (b > x)
            {
                cout << "it is not a fibonacci number" << endl;
                break;
            }
        }
        cout << "the closest fibonnaci number is : " << i << " , and its fibonnaci number is : " << b << endl;
        // cout << b << endl;
    }

    return 0;
}