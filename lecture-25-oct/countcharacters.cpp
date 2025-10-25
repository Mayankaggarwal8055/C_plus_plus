#include <iostream>

using namespace std;

int main()
{

    char chs;
    int lowercase = 0;
    int uppercase = 0;
    int whitespaces = 0;
    int digits = 0;
    int special = 0;

    while (cin >> chs)
    {

        if (chs != '$')
        {
            if (chs >= 65 and chs <= 90)
            {
                uppercase++;
            }
            else if (chs >= 97 and chs <= 122)
            {
                lowercase++;
            }
            else if (chs >= 48 and chs <= 57)
            {
                digits++;
            }
            else if (chs == 32 or chs >= 9 or chs <= 13)
            {
                whitespaces++;
            }
            else
            {
                special++;
            }
        }
        else
        {
            break;
        }
    }

    cout << lowercase << endl
         << uppercase << endl
         << digits << endl
         << whitespaces << endl
         << special;

    return 0;
}