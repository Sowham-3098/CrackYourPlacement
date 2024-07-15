class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Initialize the slow pointer to 0
        int slow = 0;
        
        // Traverse the array starting from the second element
        for(int i = 1; i < nums.size(); i++) {
            // If the current element is not equal to the previous element
            if(nums[i] != nums[i - 1]) {
                // Increment the slow pointer and update the value at the slow pointer position
                nums[slow + 1] = nums[i];
                slow++;
            }
        }
        // Return the count of unique elements, which is slow pointer index + 1
        return slow + 1;
    }
};
