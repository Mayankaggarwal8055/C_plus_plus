#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    int maxsofar = 0;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxsofar = max(maxsofar, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        total += maxsofar - a[i];
    }

    cout << total;

    return 0;
}