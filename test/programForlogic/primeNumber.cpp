#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"Is not prime";
            flag =1;
            break;
        }
        cout<<endl;
    }
    if (flag==0)
    {
        cout<<"Is prime";
    }
    
    
}