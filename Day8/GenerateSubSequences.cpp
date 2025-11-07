#include <iostream>

using namespace std;

void generateSubSequences(int arr[], int n)
{
    for (int num = 0; num < (1 << n); num++)
    {
        cout << num << ": ";

        for (int k = 0; k < n; k++)
        {

            if ((num >> k) & 1)
            {
                cout << arr[k] << " ";
            }
        }
        cout << endl;
    }
};

int main()
{

    int arr[] = {10, 20, 30, 40, 50 
      };
    int n = sizeof(arr) / sizeof(int);

    generateSubSequences(arr, n);
    return 0;
}