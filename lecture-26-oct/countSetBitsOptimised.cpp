#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int cnt = 0;

    for (int k = 0; k < ceil(log2(n+1)); k++)
    {
        int mask = n >> k;

        if (mask & 1)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}