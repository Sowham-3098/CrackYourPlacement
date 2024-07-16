class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left_zero=-1;
        

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && left_zero==-1){
                left_zero=i;
            }
            


            if(nums[i]!=0 && left_zero!=-1){
                swap(nums[i],nums[left_zero]);
                left_zero++;
            }
        }
    }
};