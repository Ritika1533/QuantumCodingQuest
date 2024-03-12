/*
35. Search Insert Position

# Approach
Binary Search and Lower Bound

# Complexity
- Time complexity: O(log N)
- Space complexity: O(1)


# Code
```
class Solution {
public:
   int binarysearch(vector<int>& arr,int s,int e,int target,int size){
           int ans = size;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (target <= arr[mid]) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }
    int searchInsert(vector<int>& nums, int target) {
    int index=binarysearch(nums,0,nums.size()-1,target,nums.size());
    return index;
    }
};

```
*/