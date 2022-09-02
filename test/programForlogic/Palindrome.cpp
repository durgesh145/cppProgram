#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rem;
    cin>>n;
    int tem=n;
    int sum=0;
    while (n!=0)
    {
        rem = n%10;
        sum = (sum*10) + rem;
        n = n/10;
    }

    if(tem==sum){
        cout<<"Its palindrome number";
    }
    else{
        cout<<" its not palindrome";
    }
    cout<<endl;
    
}