#include <iostream>
#include <vector>

using namespace std;

int targetSumPairs(vector<int> &nums, int T)
{

    int count = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            int sum = nums[i] + nums[j];
            if (sum == T)
            {
                count++;
            }
        }
       
    }

     return count;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    int T = 60;

    vector<int> nums(arr, arr + n);

    cout << targetSumPairs(nums, T) << endl;

    return 0;
}