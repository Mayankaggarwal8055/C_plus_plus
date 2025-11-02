#include <iostream>
using namespace std;

bool checkPrime(int x)
{
    if (x <= 1)
        return false;

    int i = 2;
    while (i * i <= x)
    {
        if (x % i == 0)
            return false;
        i++;
    }
    return true;
}

int main()
{
    int x = 10;

    checkPrime(x) ? cout << x << " is prime" : cout << x << " is not prime";

    return 0;
}
