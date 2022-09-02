#include<bits/stdc++.h>
using namespace std;
Sumarray(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<< " sum of array "<< Sumarray(arr, n);
    
}