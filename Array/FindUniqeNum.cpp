#include<bits/stdc++.h>
using namespace std;
FindUniqenum(int arr[], int count){
    for (int i = 0; i < count; i++)
    {
        int ans = 0;
        ans = ans^arr[i];
    }
    
   cout<<ans<<" ";
}
int main(){
int count;
cin>>count<<" ";
int arr[count];
for (int i = 0; i < count; i++)
{
    cin>>arr[i];
}
FindUniqenum(arr, count);
for (int i = 0; i < count; i++)
{
    cout<<arr[i];
}
}