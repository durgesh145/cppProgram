#include<bits/stdc++.h>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
;
        }
        cout<<endl;
    }
    

}





/*  this triangle number  */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int count;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<(k+1);
;
        }
        cout<<endl;
    }
    

}