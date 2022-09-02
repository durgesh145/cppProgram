#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    int tem = n;
    int temp = n;
    int count = 0;
    int digit;
    int sum=0;
    while (n!=0)
    {
        digit = n%10;
        count = count + 1;
        n = n/10;
    }
    cout<<count<<" "<<"Digit"<<endl;
    
    while(tem!=0){
     int rem =tem%10;
     sum =  sum + pow(rem,count);
     tem=tem/10;
    }
    cout<<temp<<" ";
    if (temp==sum)
    
    {
        cout<<" is armstrong number";
    }
    else {
        cout<<" not Armstrong number";
    }
    cout<<endl;
}