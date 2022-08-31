#include<bits/stdc++.h>
using namespace std;
void check(char ch){

        if(ch>='a' && ch<='z'){
        cout<<"Lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Uppercase";
    }
    else{
        cout<<"This is number";
    }
}



int main(){
    char ch;
    cin>> ch;
    // cout<<ch;
    check(ch);


}