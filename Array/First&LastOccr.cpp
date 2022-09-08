#include<bits/stdc++.h>
using namespace std;
// this is first element  for program.
int FirstAcc(int arr[], int count, int key){
    int s = 0;
    int e = count - 1;
    int mid = s + (e - s)/2;
    int ans = 0;  //this is create for store value of mid
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans  = mid;
            e = mid - 1;  // this main logic for accurrence.
        }
        else if (arr[mid]<key)    // go to the right side.
        {
            s = mid + 1;
        }
        else    //(arr[mid]>key) //go to the left side.
        {
           e = mid -1;
        }
        mid = s + (e - s)/2;
        
        
    }
    return ans;
}
// this is Last element for  program.
int LastAcc(int arr[], int count, int key){
    int s = 0;
    int e = count - 1;
    int mid = s + (e - s)/2;
    int ans = 0; //this is create for store value of mid
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans  = mid;
            s = mid + 1;    // this main logic for accurrence.
        }
        else if (arr[mid]<key)    // go to the right side.
        {
            s = mid + 1;
        }
        else    //(arr[mid]>key) //go to the left side.
        {
           e = mid -1;
        }
        mid = s + (e - s)/2;
        
        
    }
    return ans;

}
int main(){
    int FindAccurrence[6] = {2, 5,5,5,6,8};
    int ans1= FirstAcc(FindAccurrence, 6, 5);
    int ans2 = LastAcc(FindAccurrence, 6, 5);
    cout<<"First accurrence index is : "<<ans1<<endl;
    cout<<"Last  accurrence index is : "<<ans2<<endl;



}