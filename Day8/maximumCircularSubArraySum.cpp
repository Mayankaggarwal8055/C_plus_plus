#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubarraySumCircular(vector<int> &nums)
{
    int total = 0;
    int x = nums[0];
    int y = nums[0];
    int maxsum = x;
    int minsum = x;

    for (int i = 0; i < nums.size(); i++)
    {
        total += nums[i];
    }

    for (int i = 1; i < nums.size(); i++)
    {
        x = max(x + nums[i], nums[i]);
        maxsum = max(maxsum, x);
    }

    for (int i = 1; i < nums.size(); i++)
    {
        y = min(y + nums[i], nums[i]);
        minsum = min(minsum, y);
    }

    if (maxsum < 0)
        return maxsum;

    int wrapped = total - minsum;
    int ans = max(wrapped, maxsum);

    return ans;
}

int main()
{

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(int);

    vector<int> nums(arr, arr + n);

    cout << maxSubarraySumCircular(nums) << endl;

    return 0;
}