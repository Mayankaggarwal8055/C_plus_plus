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

    while (chs = cin.get())
    {
        if (chs == '$')
        {
            break;
        }

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
        else if (chs == ' ' or chs == '\n' or chs == '\t')
        {
            whitespaces++;
        }
        else
        {
            special++;
        }
    }

    cout << lowercase << endl
         << uppercase << endl
         << digits << endl
         << whitespaces << endl
         << special;

    return 0;
}