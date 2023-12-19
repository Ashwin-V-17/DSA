#include<bits/stdc++.h>
using namespace std;
class Solution
{
 public:
     int upperBound(vector<int>& nums,int n,int x)
     {
        int low=0,high=n-1;
        int ans=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>x)
            {
                ans=mid;
                high=low-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
     }
};
int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    Solution s;
    int ind = s.upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}
