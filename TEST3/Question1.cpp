#include <iostream>

using namespace std;

int main()
{

    int y;
    cin >> y;

    int x = y + 1;

    while (true)
    {
        int y1 = x / 1000;
        int y2 = (x / 100) % 10;
        int y3 = (x / 10) % 10;
        int y4 = x % 10;

        if (y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4 && y3 != y4)
        {
            cout << x;
            break;
        }
        x++;
        continue;
    }

    return 0;
}