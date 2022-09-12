#include<bits/stdc++.h>
using namespace std;
 int Mersesort(int nums1[],int nums2[],int nums3[],int n,int m){

     int i=0;
     int j=0;
     int k = 0;
      //first traverse for nums1
     while (i<n)
     {
        nums3[k++] = nums1[i++];
     }
      //2ns traverse for nums2
      while (j<m)
      {
        nums3[k++] = nums2[j++];
      }
      sort(nums3,nums3+(n+m));
      

 }
int main(){
    int n =5,m=3;
    int nums1[5] = {5,8,10,12,14};
    int nums2[3]= {1,7,10};
    int nums3[n+m];
    Mersesort(nums1,nums2,nums3,5,3);
     for (int i = 0; i < n+m; i++)
    {
        cout<<nums3[i]<<" ";
    }
    
    return 0;
}