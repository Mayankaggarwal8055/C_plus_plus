#include <iostream>

using namespace std;

int main()
{

    int n; 
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char start = 'A';
        for (int j = n - 1; j >= i; j--)
        {

            cout << static_cast<char>((start + 1) - 1);
            start++;
        }

        cout << endl;
    }

    return 0;
}