#include <iostream>

using namespace std;

void f(int n, char src, char dst, char hlp)
{
    // base case;

    if (n == 0)
    {
        return;
    }

    // step 1

    f(n - 1, src, hlp, dst);

    // strep 2

    cout << "move disk from" << src << "to" << dst << endl;

    // step 3

    f(n - 1, hlp, dst, src);
}

int main()
{
    int n = 3;

    f(n, 'A', 'B', 'C');

    return 0;
}