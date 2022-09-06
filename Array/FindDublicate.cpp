#include<bits/stdc++.h>
using namespace std;
int dublicatearray(int arr[], int n){
    int ans =0;
    for (int i = 0; i < n; i++)
    {
     ans = ans^arr[i];

     ans = ans^i;
    }
    return ans;  
}
int main(){
    int n;
    cin>>n;
    int ans;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans1 = dublicatearray(arr, n);
    cout<<ans1;
    return 0;
}