#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin>>arr2[j];
    }
     for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for (int j = 0; j < m; j++)
    {
        cout<<arr2[j]<<" ";
    }

	return 0;
}