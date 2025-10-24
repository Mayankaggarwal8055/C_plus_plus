#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;

    cout << 10 + 20 << endl;

    cout << "This is C++14 standard." << endl;

    cout << sizeof(int) << 'b' << endl;

    cout << sizeof(double) << 'b' << endl;

    cout << sizeof(string) << 'b' << endl;

    // int y;

    int a = 10;
    int b = 20;
    int c = 30;

    if (a > b and a > c)
    {
        cout << a << endl;
    }
    else if (b > c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c;
    }

    int n = 10;
    int i = 1;

    while (i <= n)
    {
        cout << i << endl;
        i = i + 1;
    }

    return 0;
}
