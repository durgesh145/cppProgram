#include<bits/stdc++.h>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter your name : "<<endl;
    cin>>name;
    cout<<"this is my name : "<<name<<endl;
    // find length.
    int count = 0;
    for (int  i = 0; name[i]!='\0'; i++)
    {
        count++;
    }
    cout<<"char length is : "<<count<<endl;
    //n reverse a character.


 int s=0;
 int e=count-1;
 while (s<e){
    int swap = name[s];
    name[s]= name[e];
    name[e]=swap;
    s++;
    e--;
 }
 for (int i = 0; i < count; i++)
 {
    cout<<name[i];
 }
 return 0;  
}