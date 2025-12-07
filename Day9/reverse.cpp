#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void isgoodstring(string &str)
{
    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main()
{

    string str = "hello";
    isgoodstring(str);

    cout << str;
}
