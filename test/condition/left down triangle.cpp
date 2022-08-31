#include<bits/stdc++.h>
using namespace std;
int main (){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    
}