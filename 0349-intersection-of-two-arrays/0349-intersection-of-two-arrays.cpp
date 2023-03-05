class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        //declare a set to ensure that only unique values get store
        set<int>set;

        //sort the given arrays
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        //use pointers i and j for finding common elements
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                set.insert(nums1[i]);
                i++;
                j++;
            }   
        }

        //copy the common as well as unique elements from a set to answer vector
        vector<int>ans(set.begin(),set.end());
        return ans;
    }
};
// two pointer approach