#include<bits/stdc++.h>
using namespace std;
void  search(int arr[], int n, int num){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            /* find num number  */
            cout<<"found number "<<num;
            return;
        }
    }
    cout<<"Not found number ";
    

}
int main(){
    int n;
    cout<<" Enter the size :";
    cin>>n;
    int num;
    cout<<"Enter the num number: ";
    cin>>num;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        //cout<<"linear search ""<<endl;
    }

   search(arr, n, num); 
}