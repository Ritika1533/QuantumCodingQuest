/*Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted
 in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

The overall time complexity of the sortedSquares function is O(n + n log n), where O(n) accounts for the loop
iterating through each element, and O(n log n) is due to the sorting operation. Since sorting dominates the time
 complexity, the overall time complexity is O(n log n).

Time complexity: O(n log n)

Space complexity: O(1)

CODE:

class Solution {
public:
void squareArray(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
    sort(arr.begin(),arr.end());
}
    vector<int> sortedSquares(vector<int>& nums) {
        squareArray(nums,nums.size());
        return nums;
    }
};
*/