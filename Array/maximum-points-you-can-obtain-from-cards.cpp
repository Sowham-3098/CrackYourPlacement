#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
       
        int j=nums.size()-1;
       long long sum=0;
        long long ans=0;
        for(int i=0;i<k;i++){
          sum+=nums[i];
        }
        ans=sum;
        while(k--){
            sum-=nums[k];
            sum+=nums[j];
            
            
            j--;
            ans=max(ans,sum);
        }
        return ans;
        
    }
};