#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> &nums)
{

    int n = nums.size();

    vector<int> answer(n, 0);

    int positive = 0;
    int negative = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            answer[negative] = nums[i];
            negative += 2;
        }
        else
        {
            answer[positive] = nums[i];
            positive += 2;
        }
    }
    return answer;
}
int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> ans = rearrange(nums);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}