#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str = "chgbdaeiou";
    int cnt = 0;
    int maxsofar = 0;

    for (char ch : str)
    {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
        {
            cnt++;
            maxsofar = max(maxsofar, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << maxsofar << endl;
    return 0;
}