class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.size() == 0 || nums1.size() == 0)
        return {};
        
        unordered_map<int,int> nge;
        stack<int> helper;
        
        // Push the last element of nums2 to the stack and map it to -1 in the NGE map
        helper.push(nums2[nums2.size() - 1]);
        nge[nums2[nums2.size() - 1]] = -1;
        
        // Iterate over the rest of nums2 in reverse order
        for (int i = nums2.size() - 2; i >= 0; i--) {
            // If the current number is smaller than the top of the stack,
            // it's NGE is the top of the stack
            if (nums2[i] < helper.top()) {
                nge[nums2[i]] = helper.top();
                helper.push(nums2[i]);
                continue;
        }
            
        // If the current number is larger, pop the stack until we find a larger number
        // or the stack is empty
        while (!helper.empty() && helper.top() < nums2[i])
            helper.pop();
            
        // If the stack is empty after popping, the current number has no NGE, so map it to -1
        // Otherwise, its NGE is the top of the stack
        if (helper.empty()) {
            helper.push(nums2[i]);
            nge[nums2[i]] = -1;
            } else {
                    nge[nums2[i]] = helper.top();
                    helper.push(nums2[i]);
                }
        }
        // Replace each number in nums1 with its NGE
        for (int i = 0; i < nums1.size(); i++)
            nums1[i] = nge[nums1[i]];

            // Return the modified nums1
            return nums1;
        
    }
};