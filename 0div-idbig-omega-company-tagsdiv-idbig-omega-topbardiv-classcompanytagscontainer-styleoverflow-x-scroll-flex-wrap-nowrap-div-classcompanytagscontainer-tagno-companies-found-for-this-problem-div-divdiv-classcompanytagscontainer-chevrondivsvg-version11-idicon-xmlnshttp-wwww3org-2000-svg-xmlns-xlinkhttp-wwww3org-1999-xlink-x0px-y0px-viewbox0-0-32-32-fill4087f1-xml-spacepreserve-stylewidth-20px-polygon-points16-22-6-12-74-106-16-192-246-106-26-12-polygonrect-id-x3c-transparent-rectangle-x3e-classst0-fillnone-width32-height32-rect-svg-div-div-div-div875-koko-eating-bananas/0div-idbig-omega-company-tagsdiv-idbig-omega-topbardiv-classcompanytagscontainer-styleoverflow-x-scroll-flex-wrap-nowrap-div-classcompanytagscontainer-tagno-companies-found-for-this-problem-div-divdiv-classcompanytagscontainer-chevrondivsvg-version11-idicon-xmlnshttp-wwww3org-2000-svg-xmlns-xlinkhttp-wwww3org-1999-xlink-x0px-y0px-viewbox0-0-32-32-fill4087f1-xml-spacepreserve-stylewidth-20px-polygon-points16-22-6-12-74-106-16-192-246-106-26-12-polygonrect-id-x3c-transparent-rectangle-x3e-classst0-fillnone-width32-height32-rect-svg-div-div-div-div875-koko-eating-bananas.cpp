class Solution {
public:
    
    
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int n = piles.size(), start = 1, end = piles[n-1], ans = 1; 
        if(n==h)    return end;
        while(start<=end){
            int mid = start+(end-start)/2;
            long long hourCount = 0;
            for(int i=0; i<n; i++)
                hourCount += (piles[i]-1)/mid + 1;
            if(hourCount<=h)
                ans = mid, end = mid-1;
            else
                start = mid+1;
        }
        return ans;
    }
};