class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> vec;
        for (int i = 0; i < nums.size(); i++) {

            if (mp[nums[i]] > 0 && i != mp[nums[i]] - 1) {

                vec.push_back(i);
                vec.push_back(mp[nums[i]] - 1);
                break;
            }
            mp[target - nums[i]] = i + 1;
        }

        return vec;
    }
};