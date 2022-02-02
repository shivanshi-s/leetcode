class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; //last element of nums1
        int j = n - 1 ; //last element of nums2
        int k  = m + n - 1 ; //size of the resultant arrayc
        
        while (i >=0 && j >= 0) 
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
    }
};