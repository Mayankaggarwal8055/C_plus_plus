#include <iostream>
#include <string>

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

int main()
{

    string str = "aeiou";

    cout << isgoodstring(str);
}
