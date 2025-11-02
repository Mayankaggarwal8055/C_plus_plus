#include <iostream>

using namespace std;

int main()
{

    int n = 123;

    int num = 0;

    while (n > 0)
    {

        int i = n % 10;

        num = num * 10 + i;

        n = n / 10;
    }

    cout << num << endl;

    return 0;
}