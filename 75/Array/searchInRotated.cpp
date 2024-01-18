/*
Example 1:
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:
Input: nums = [1], target = 0
Output: -1
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
       int low=0;
       int high=n-1;
       int mid=0;
       while(low<=high)
       {
           mid=(low+high)/2;
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
