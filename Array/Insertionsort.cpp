#include<bits/stdc++.h>
using namespace std;
int Insertionsort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int ans = arr[i];
        int j = i-1;
        while (arr[j]>ans && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = ans;
        
    }
    
}
int printSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}
int main(){
    int n =5;
    int arr[5] = {4, 6, 3, 8,13};
    Insertionsort(arr, n);
    cout<<"Print the sort array : ";
    printSort(arr,n);
    return (0);
}