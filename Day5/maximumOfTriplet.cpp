#include <iostream>
#include <climits>

using namespace std;

int main()
{

    int arr[] = {-10, -20, 1, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > fl)
        {

            tl = sl;
            sl = fl;
            fl = arr[i];
        }
        else if (arr[i] > sl)
        {
            tl = sl;
            sl = arr[i];
        }
        else if (arr[i] > tl)
        {
            tl = arr[i];
        }
    }

    int fs = INT_MAX;
    int ss = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < fs)
        {
            ss = fs;
            fs = arr[i];
        }
        else if (arr[i] < ss)
        {
            ss = arr[i];
        }
    }

    int max1 = fs * ss * fl;
    int max2 = fl * sl * tl;

    if (max1 > max2)
    {
        cout << max1;
    }
    else
    {
        cout << max2;
    }

    return 0;
}
