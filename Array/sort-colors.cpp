class Solution {
public:
    void sortColors(vector<int>& nums) {

        // using Dutch national flag algorithm using three pointer

        // here we have four space , one is (0,low-1) filled with 0, (low to
        // mid-1) filled with 1 , (mid to high-1) filled with 1/2/0 and unsorted
        // and (high,n-1) filled with 2, now we have to sort the unsorted window

        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {

            if (nums[mid] == 0) {
                // send the 0 to the extreme left by swapping and shrink the
                // window from left
                swap(nums[mid], nums[low]);
                low++;
                mid++;

            } else if (nums[mid] == 1) {
                // do nothing as will be sorted
                mid++;

            } else {
                // send the 2 to the extreme right by swapping and shrink the
                // window from right
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};