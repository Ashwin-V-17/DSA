#include<bits/stdc++.h>
using namespace std;
class Solution 
{
   public:
       double median(vector<int>& nums1,vector<int>& nums2)
       {
        int n1=nums1.size();
       int n2=nums2.size();
       if(n1>n2) return median(nums2,nums1);
       int low=0,high=n1;
       int left=(n1+n2+1)/2;
       int mid1,mid2;
       while(low<=high)
       {
           mid1=(low+high)/2;
           mid2=left-mid1;
           int l1=INT_MIN,l2=INT_MIN;
           int r1=INT_MAX,r2=INT_MAX;
           if(mid1<n1) r1=nums1[mid1];
           if(mid2<n2) r2=nums2[mid2];
           if(mid1-1 >= 0) l1=nums1[mid1-1];
           if(mid2-1 >= 0) l2=nums2[mid2-1];
           if(l1<=r2 && l2<=r1)
           {
               if((n1+n2)%2 ==1) return max(l1,l2);
               else return ((double)(max(l1,l2)+min(r1,r2))/2.0);
           } 
           else if(l1> r2) high=mid1-1;
           else 
           low=mid1+1;
       }
       return 0;
       }
};
int main()
{
    vector<int> a = {1, 4, 7, 10, 12};
    vector<int> b = {2, 3, 6, 15};
    Solution s;
    cout << "The median of two sorted array is "  <<s. median(a, b) << '\n';
}