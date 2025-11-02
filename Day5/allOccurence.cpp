#include <iostream>

using namespace std;

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 30, 70, 80, 90};
    int n = sizeof(arr) / sizeof(int);

    int t;
    cin >> t;

    bool flag = false;

    int i;

    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == t)
        {
            flag = true;
            cout << t << "found at index " << i << endl;
        }
    }

    if (flag == false)
    {
        cout << t << " not found" << endl;
    }

    return 0;
}
