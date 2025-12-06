#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str = "abcde";

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i; j < str.length(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << str[k];
            }
            cout<<", ";
        }
        cout << endl;
    }
}
