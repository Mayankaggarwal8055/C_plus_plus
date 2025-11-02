#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << "   ";
        }
        int num = i;

        for (int k = 1; k <= i; k++)
        {
            cout << "  " << num;
            num++;
        }
        num -= 2;
        for (int p = 1; p < i; p++)
        {

            cout << "  " << num;
            num = num - 1;
        }

        cout << endl;
    }

    return 0;
}