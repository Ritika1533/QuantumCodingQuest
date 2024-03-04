/*26. Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each
 unique element appears only once. The relative order of the elements should be kept the same. Then return
 the number of unique elements in nums.
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Time and space complexity: O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        vector<int> nums2;
           nums2.push_back(nums[0]);
        for(int i=1,j=0;i<nums.size();i++){
            if(nums[i]!=nums2[j]){
                j++;
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