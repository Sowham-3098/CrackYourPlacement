/* class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort (a.begin(),a.end());
        long long ans=INT_MAX;
        int i=0;
        int j=i+m-1;
        for( i=0;j<n;i++,j++){
            ans=min(ans,a[j]-a[i]);
            
        }
        
        return ans;
        
    
    }   
}; */