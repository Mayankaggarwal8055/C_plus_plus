#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int i = 0;
    int j = n - 1;
    int gondola = 0;

    while (i <= j)
    {
        if (a[i] + a[j] <= x)
        {
            i++;
            j--;  
        }
        else
        {
            j--;
        }
        gondola++;
    }

    cout << gondola;

    return 0;
}