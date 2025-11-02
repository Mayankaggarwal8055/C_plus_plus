#include <iostream>
using namespace std;

void mySwap(int& x, int& y)
{
    x = x + y;
    y = x - y;
    x = x - y;
}

int main()
{
    int x = 10;
    int y = 20;

    mySwap(x, y);

    cout << "x = " << x << ", y = " << y;

    return 0;
}
