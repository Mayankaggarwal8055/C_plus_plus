#include <iostream>

using namespace std;

int main()
{

    int n = 453;

    int sum = 0;

    while (n > 0)
    {
        int i = n % 10;
        sum += i;
        n = n / 10;
    }

    cout << sum << endl;;

    return 0;
}