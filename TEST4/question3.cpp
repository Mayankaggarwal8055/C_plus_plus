#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> a(n);
    int maxsofar = 0;
    int minsofar = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxsofar = max(maxsofar,a[i]);
        minsofar = min(minsofar,a[i]);
    }

    

    return 0;
}