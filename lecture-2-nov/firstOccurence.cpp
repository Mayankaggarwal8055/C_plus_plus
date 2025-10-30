#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 3, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    int t;
    cin >> t;

    int i;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t)
        {
            cout << t << "found at index " << i << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << t << " not found" << endl;
    }

    return 0;
}
