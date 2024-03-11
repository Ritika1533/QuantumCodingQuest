/* 71.
class Solution {
public:
void swapTwo(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(vector<int>& arr,int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swapTwo(arr[j],arr[j+1]);
            }
        }
    }
}
    void sortColors(vector<int>& nums) {
        bubbleSort(nums,nums.size());
    }
};
*/
