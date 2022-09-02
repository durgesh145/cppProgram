#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int n){
    int start = 0;
    int end = n-1;
    int swap = 0;
        while (start<=end)
        {
            //swap cpp through swap math
            swap =  arr[start];
            arr[start] = arr[end];
            arr[end]= swap;
            start++;
            end--;
        }
        cout<<"this is reverse array : ";
        for (int i = 0; i < n; i++)
        {
             cout<<arr[i]<<" ";
        }
    
}
int main(){
    int n;
    //int arr[100];
    cout<<" Enter a size : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
     cout<<"Enter list of  Array : ";
    for (int  i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
   reversearray(arr, n);
    
}