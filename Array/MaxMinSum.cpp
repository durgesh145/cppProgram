#include<bits/stdc++.h>
using namespace std;
  int getMaxMin(int arr[], int n){
      int ans ;
    int max= INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
      if(arr[i]<min){
          min = arr[i];
      }
}
  ans = max + min ;
  return ans;
}
 
int main(){

   // int ans;
    int n;
    cin>>n;
    int arr[100];
    //input in array
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
	// Function calling
    getMaxMin(arr, n);
    
}