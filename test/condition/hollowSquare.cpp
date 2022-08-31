#include<bits/stdc++.h>
using namespace std;
int main (){

    int count;
    cin>>count;
    // int arr[][];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
           if(i==0||i==count-1||j==0||j==count-1){
            cout<<"*";
           }
         else{
            cout<<" ";
         }
        }
        cout<<endl;
}
}