#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <(n-i)-1 ; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*i + 1; j++)
        {
            cout<<"*";
        }
        // for (int k = 0; k < i; k++)
        // {
        //     cout<<"*";
        // }
        
        cout<<endl;
        
    }

     for (int i = 0; i < n; i++)
    {
         for (int j = 0; j <= i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*(n-i-1) - 1; k++)
        {
            cout<<"*";
        }
        // for (int j = 0; j <(n-i)-2 ; j++)
        // {
        //     cout<<"*";
        // }
        cout<<endl;
        
    }
    
}