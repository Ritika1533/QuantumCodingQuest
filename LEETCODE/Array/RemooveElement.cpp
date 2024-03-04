/* 27.Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
 The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
 Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.

Time and Space complexity: O(n)

Code:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         if (nums.empty()) {
            return 0;
        }
        vector<int> nums2;
        for(int i=0;i<nums.size();i++){
            if(val!=nums[i]){
              nums2.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums2.size(); i++) {
            nums[i] = nums2[i];
        }
        return nums2.size();
    }
};
 */