#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        string s;
        cin >> s;

        bool working[26] = {false};

        int i = 0;
        int len = s.length();

        while (i < len)
        {
            char ch = s[i];
            int cnt = 0;

            while (i < len && s[i] == ch)
            {
                i++;
                cnt++;
            }

            if (cnt % 2 == 1)
            {
                working[ch - 'a'] = true;
            }
        }

        string res = "";
        for (int i = 0; i < 26; i++)
        {
            if (working[i]) 
            {
                res += char('a' + i);
            }
        }

        cout << res << endl;
    }

    return 0;
}
