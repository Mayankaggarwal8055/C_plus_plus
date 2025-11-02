#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string str;
    cin >> str;

    int ANTON = 0;
    int Danik = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            ANTON++;
        }
        else if (str[i] == 'D')
        {
            Danik++;
        }
    }

    if (ANTON == Danik)
    {
        cout << "Friendship";
    }
    else if (ANTON > Danik)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}
