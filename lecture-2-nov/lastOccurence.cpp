#include <iostream>

using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 30, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    int t;
    cin >> t;

    int i;

    for ( i = n - 1; i >= 0; i--)
    {
        if (arr[i] == t)
        {
            cout << t << "found at index " << i << endl;
            break;
        }
    }

    if (i == -1)
    {
        cout << t << " not found" << " output is -1 " <<  endl;
    }

    return 0;
}
