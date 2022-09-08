#include<bits/stdc++.h>
using namespace std;
int Bubblesort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
               int swap = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = swap;
            }
            
     
        }
        
    }
    
}
int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
     cin>>arr[i];
    }
    Bubblesort(arr,n);
    cout<<"sorted array : ";
    printArray(arr, n);
    return 0;
    
}