#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    //this loop row
    for (int i = 0; i < n; i++)
    {
        //this loop for column for space
        for (int j = 0; j <(n-i)-1 ; j++)
        
            cout<<" ";
            //this loop for column for star left side
        
        for (int j = 0; j <=i ; j++)
        
            cout<<"*";
        //this loop for column for right side  star
        for (int k = 0; k < i; k++)
        
            cout<<"*";
        
        cout<<endl;
        
        
        
    }
    
    
} 
