//bruteforce solution

	class Solution {
	public:
		int findDuplicate(vector<int>& nums) {
			sort(nums.begin(), nums.end());
			int ans;
			for (int i = 0; i < nums.size() - 1; i++) 
				if (nums[i] == nums[i + 1])
					 return ans=nums[i];
			return ans;
		}
	};
// we know all elements are from 1to n-1 and there are 2 elements duplicate, to cancel out other ones, we do XOR^XOR^XOR for the duplicate number
//The bitwise XOR ( ^ ) operator returns a 1 in each bit position for which the corresponding bits of either but not both operands are 1 s.