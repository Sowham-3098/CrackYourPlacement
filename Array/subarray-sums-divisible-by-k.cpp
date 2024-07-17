class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            int remainder = ((sum % k) + k) % k; // to avoid negative value

            if (mp.find(remainder) != mp.end())
            {
                ans += mp[remainder];
            }
            mp[remainder]++;
        }
        return ans;
    }
};