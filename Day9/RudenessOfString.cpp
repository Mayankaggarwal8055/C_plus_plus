#include <iostream>
#include <string>

using namespace std;

int rudenessOfString(string &str)
{
    int cntb = 0;
    int rudeness = 0;

    int n = str.size();

    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == 'b')
        {
            cntb++;
        }
        else
        {
            rudeness += cntb;
        }
    }

    return rudeness;
}

int main()
{

    string str = "ababbaab";

    cout << rudenessOfString(str);
    
    return 0;
}
