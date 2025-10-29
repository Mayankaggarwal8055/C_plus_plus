#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int mask = n - 1;

    if ((n & mask) == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false ";
    }

    return 0;
}