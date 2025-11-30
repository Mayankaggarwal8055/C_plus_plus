#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int currentWaitingTime = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (currentWaitingTime <= a[i])
        {
            currentWaitingTime += a[i];
            count++;
        }
        else
        {
            continue;
        }
    }

    cout << count;

    return 0;
}