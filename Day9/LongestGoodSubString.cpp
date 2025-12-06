#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
bool isgoodstring(string &str)
{
    for (char ch : str)
    {
        if (!(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'))

            return false;
    }

    return true;
}

int longestgoodsubstring(string &str)
{
    int count = 0;

    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string substring = str.substr(i, j - i + 1);
            if (isgoodstring(substring))
            {
                count = max(count, j - i + 1);
            }
        }
    }
    return count;
}

int main()
{

    string str = "cbaeicdeiou";

    cout << longestgoodsubstring(str);
}
