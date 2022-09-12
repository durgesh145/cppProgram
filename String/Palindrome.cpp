#include<bits/stdc++.h>
using namespace std;
char Lowercase(char ch){
    if (ch>='A' && ch<='Z')
    {
        char temp = ch -'A' + 'a';
        return temp;
    }
    else{
        return ch;
    }
    
}
bool PalindromeCheck(char a[], int n){
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        if (Lowercase(a[s++])!=Lowercase(a[e--]))
        {
            return 0;
        }
    }
    return 1;
    
}
int getnamelenth(char name[]){
    int count =0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}
int main(){
    char name[20];
    cout<<"Enter tha name : ";
    cin>>name;

    int len = getnamelenth(name);
    cout<<"its Palindrome or not "<<PalindromeCheck(name,len)<<endl;
    cout<<" this is character : "<< Lowercase('b')<<endl;
    cout<<" this is character : "<< Lowercase('A')<<endl;
     return 0;
}