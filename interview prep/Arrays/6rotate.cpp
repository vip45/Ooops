class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();

        vector<int> rtd;
        int n = nums.size();
        for (int i = n - k; i < n; i++)
        {
            rtd.push_back(nums[i]);
        }

        for (int i = 0; i < n - k; i++)
        {
            rtd.push_back(nums[i]);
        }

        nums.clear();

        for (int i = 0; i < n; i++)
        {
            nums.push_back(rtd[i]);
        }
    }
};