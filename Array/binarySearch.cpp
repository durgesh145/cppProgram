#include<bits/stdc++.h>
using namespace std;
    int BinaraySearch(int arr[], int count, int key){
        int start = 0;
        int end = count-1;
        int mid = start + (end - start)/2;
        while(start<=end)
        {
            if (arr[mid] == key)
            {
                return mid;
            }
            if(arr[mid]<key)
            {
                start = mid + 1;
            }
            else{
                 end = mid-1;

            }
            mid = start + (end - start)/2;
        }
        return -1;
       //cout<<" key is1 : "<< mid ;
        
    }

int main(){
    // int count;
    // cin>>count;
    // int key;
    // // cin>>key;
    // cout<<"input th size array: "<<count<<endl;
    // cout<<"input the key : "<<key<<endl;
    // int arr[count];
    // for (int i = 0; i < count; i++)
    // {
    //     cin>>arr[i];
    // }
    // //   for (int i = 0; i < count; i++)
    // // {
    // //     cout<<arr[i]<<" ";
    // // }
    int arr1[6] = {4, 6, 8, 12, 18, 20};
    int arr2[6] = {3, 5, 7, 13, 15, 17};
     BinaraySearch(arr1, 6, 12);
    int ans1 = BinaraySearch(arr1, 6, 21);
    cout<<"  this key index : "<< ans1 <<endl;
    BinaraySearch(arr2, 6, 17);
    int ans2 = BinaraySearch(arr2, 6, 71);
    cout<<"  this key index : "<< ans2 ;
    return 0;
}