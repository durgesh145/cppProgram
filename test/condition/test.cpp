#include<bits/stdc++.h>
using namespace std;
int main (){
    int col;
    int row;
    cin>>col>>row;
    for (int i = 0; i <row; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        cout<<"*";
       }
       for (int k = 0; k < 2 *(row-i-1)-1; k++)
       {
        cout<<" ";
       }
       for (int l = 0; l <=i ;l++)
       {
        if(l==row-1){
            break;
        }
        cout<<"*";
       }
       
       cout<<endl;
       
    }
    for (int i = row; i >0; i--)
    {
       for (int j = 0; j <=i; j++)
       {
        cout<<"*";
       }
       for (int k = 0; k < 2 *(row-i-1)-1; k++)
       {
        cout<<" ";
       }
       for (int l = 0; l <=i ;l++)
       {
        if(l==row-1){
            break;
        }
        cout<<"*";
       }
       
       cout<<endl;
       
    }

}