#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
   int kthelement(int arr1[],int arr2[],int n,int m,int k)
   {
      if(n>m) return kthelement(arr2,arr1,m,n,k);
        int low=max(0,k-m),high=min(n,k);
        int mid1,mid2;
        while(low<=high)
        {
            mid1=(low+high)/2;
            mid2=k-mid1;
            int l1=INT_MIN,l2=INT_MIN;
            int r1=INT_MAX,r2=INT_MAX;
            if(mid1<n) r1=arr1[mid1];
            if(mid2<m) r2=arr2[mid2];
            if(mid1-1>=0) l1=arr1[mid1-1];
            if(mid2-1>=0) l2=arr2[mid2-1];
            if(l1<=r2 && l2<=r1)
            {
                return max(l1,l2);
            }
            else if(l1>r2)
            {
                high=mid1-1;
            }
            else 
            {
                low=mid1+1;
            }
        }
        return 1;
   }
};
int main() {
    int array1[] = {2,3,6,7,9};
    int array2[] = {1,4,8,10};
    int n = sizeof(array1)/sizeof(array1[0]);
    int m= sizeof(array2)/sizeof(array2[0]);
    int k = 5;
    Solution s;
    cout<<"The element at the kth position in the final sorted array is "
    <<s.kthelement(array1,array2,m,n,k);
    return 0;
}