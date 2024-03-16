/*136. Single Number
Solved
Easy
Topics
Companies
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1


Complexity
Time complexity:O(n);
Space complexity:O(1);


code:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int value=0;
         for(int i=0;i<nums.size();i++){
            value =value ^ nums[i];
        }
      return value;
    }
};
*/