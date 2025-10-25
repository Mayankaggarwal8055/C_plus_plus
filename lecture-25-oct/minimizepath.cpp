#include <iostream>

using namespace std;

int main()
{

    int x = 0;
    int y = 0;

    char ch;

    while (cin >> ch)
    {

        if (ch == '$')
        {
            break;
        }
        if (ch == 'E')
        {
            x++;
        }
        else if (ch == 'W')
        {
            x--;
        }
        else if (ch == 'N')
        {
            y++;
        }
        else
        {
            y--;
        }
    }

    if (x > 0)
    {
        for (int i = 0; i < x; i++)
        {
            cout << 'E';
        }
    }
    else if (x < 0)
    {
        for (int i = 0; i < -x; i++)
        {
            cout << 'W';
        }
    }

    if (y > 0)
    {
        for (int i = 0; i < y; i++)
        {
            cout << 'N';
        }
    }
    else if (y < 0)
    {
        for (int i = 0; i < -y; i++)
        {
            cout << 'S'<< endl;
        }
    }
    cout << x << " " << y << endl;

    return 0;
}