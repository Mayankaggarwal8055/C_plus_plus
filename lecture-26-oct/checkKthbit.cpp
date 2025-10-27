#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int k;
    cin >> k;

    int mask = 1 << k;

    if (n & mask)
    {
        cout << "set";
    }
    else
    {
        cout << "notset";
    }

    return 0;
}