#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <= i; j++)
       {
        cout<<"*";
       }
      int  count=2*n-2*i;
       for (int k = 0; k < count; k++)
       {
        cout<<" ";
       }
       for (int j = 0; j <= i; j++)
       {
        cout<<"*";
       }
       cout<<endl;
       
       
    }
        for (int i = n; i>= 0; i--)
    {
       for (int j = 0; j <= i; j++)
       {
        cout<<"*";
       }
      int  count=2*n-2*i;
       for (int k = 0; k < count; k++)
       {
        cout<<" ";
       }
       for (int j = 0; j <= i; j++)
       {
        cout<<"*";
       }
       cout<<endl;
       
       
    }
    
}