/*Given an integer array nums, return true if any value appears at least twice in the array, and return false
if every element is distinct.
Example 1:
Input: nums = [1,2,3,1]
Output: true
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
Input: nums = [1,2,3,4]
Output: false
Approach
Firstly Sorted the array before checking for consecutive equal elements allowed me a efficient way to detection
duplicates and helped me to prevent time limit exceeded errors, especially for larger inputs.Here also checked
aarray is either empty or contains only one element in thi scenarios there is no chance of duplicates.

Complexity

Time complexity:
O(n log n)

Space complexity:
O(1)
CODE:

class Solution {
public:
bool check(vector<int>& arr,int n){
	if(n<2)
	return false;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			return true;
		}
	}
	return false;
}
	bool containsDuplicate(vector<int>& nums) {
	 bool found=check(nums,nums.size());
	 return found;
	}
};

*/