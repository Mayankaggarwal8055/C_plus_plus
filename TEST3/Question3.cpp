#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string a;
    cin >> a;

    string b;
    cin >> b;

    for (int i = 0; i < a.length(); i++)
    {
        char c = a[i];
        char d = b[i];

        if (c != d)
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
    }

    return 0;
}