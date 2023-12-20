#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
     int search(vector<int>& nums,int n,int target)
     {
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
           {
               return mid;
           }
           else if(nums[low]<=nums[mid])
           {
               if(nums[low]<=target &&target<=nums[mid])
               {
                   high=mid-1;
               }
               else 
               {
                   low=mid+1;
               }
           }
           else 
           {
               if(nums[mid]<=target && target<=nums[high])
               {
                   low=mid+1;
               }
               else 
               {
                   high=mid-1;
               }
           }
       }
       return -1;
   }

};
int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    Solution s;
    int ans = s.search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}