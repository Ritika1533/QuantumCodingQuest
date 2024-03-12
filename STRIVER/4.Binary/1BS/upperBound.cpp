/*

#include <algorithm>
#include <vector>
int upperBound(vector<int> &arr, int x, int n)
{
    int s = 0, e = n - 1, ans = n;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

*/