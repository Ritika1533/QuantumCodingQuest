/*

class Solution {
public:
int BinarySearch(vector<int>& arr,int s,int e,int target){

    while(s<=e){
        int mid=s+(e-s)/2;
        if(target==arr[mid]){
            return mid;
        }
        if(target>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
   int inx = BinarySearch(nums, 0, nums.size()-1, target);

    return inx;
    }
};*/