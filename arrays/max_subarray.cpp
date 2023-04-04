#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int n = nums.size();

    int mx = INT_MIN;
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current += nums[i];

        mx = max(mx, current);

        if (current < 0)
        {
            current = 0;
        }
    }
    return mx;
}
vector<int> Print(vector<int> &nums)
{
    int n = nums.size();

    int finalRes = INT_MIN;
    int current = 0;
    int length = 0;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        current += nums[i];

        finalRes = max(finalRes, current);

        if (finalRes > 0)
        {
            // length += 1;
            ans.emplace_back(nums[i-1]);
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // cout << maxSubArray(nums) << "\n";

    vector<int> result = Print(nums);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}