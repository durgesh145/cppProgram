#include<bits/stdc++.h>
using namespace std;
//int SelectSort(int arr[], int n){
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[j]>arr[i])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
            
    //     }
        
    // }
    
//}
int main(){
    int n=5;
    int arr[5] = {5,2,8,7,1};
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
   
   //SelectSort(arr, n);
   for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }  
   cout<<endl;
}