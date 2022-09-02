#include<bits/stdc++.h>
using namespace std;
AlternativeSwap(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if ((i+1)<n)
        {
            // int swap = 0;
            // swap = arr[i];
            // arr[i] = arr[i+1];
            // arr[i+1] = swap;
            swap(arr[i],arr[i+1]);
        }
    }
    
}
int main(){
    int n; // size of array declaration.
     //this is array declaration.
    cout<<" Enter the array size : ";
    cin>>n;
    //cin>>n; // input size of array.
    //this loop input of array list
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // this is ouput for array list 
    cout<<"this is list of array : ";
    
    //this is function of alternative swap array
    AlternativeSwap(arr, n);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   // cout<<endl;
}