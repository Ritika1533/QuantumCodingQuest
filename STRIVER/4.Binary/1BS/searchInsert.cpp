/*

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

int searchInsert(vector<int> &arr, int m) {
     int index=binarysearch(arr,0,arr.size()-1,m,arr.size());
     return index;
  }
  */