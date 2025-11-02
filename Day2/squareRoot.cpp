#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{

    int x = 30;

    double ans = 0;

    int p = 20;

    // int a =

    while ((ans * ans) <= x)
    {
        ans = ans + 1;
    }

    ans = ans - 1;

    int i = 1;
    double inc = 0.1;

    while (i <= p)
    {

        while (ans * ans <= x)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc / 10;

        i = i + 1;
    }

    cout << setprecision(20) << ans;

    return 0;
}