#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<< max;
}
 
int main(){


    int n;
    cin>>n;
    int arr[100];
    //input in array
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    getmax(arr, n);
    //  cout<<"this is min number"<< getmin(arr,n) <<endl;
    //cout<<" this is max number "<< getmax(arr, n);
}