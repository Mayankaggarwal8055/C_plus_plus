#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int current = 0;
    int minCapacity = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        current -= a;
        current += b;
        minCapacity = max(min aCapacity, current);
    }

    cout << minCapacity << endl;

    return 0;
}
