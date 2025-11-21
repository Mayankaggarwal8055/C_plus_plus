#include <iostream>
#include <vector>

using namespace std;

int generatePairs(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            cout << nums[i] << " " << nums[j] << "  ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    int n = sizeof(arr) / sizeof(int);

    vector<int> nums(arr, arr + n);

    cout << generatePairs(nums) << endl;

    return 0;
}