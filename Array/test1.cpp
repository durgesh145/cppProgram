#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; j++)
        {
            for (int k = j+1; i <n; k++)
            {
        cout<<arr1[i][j][k]<<" ";
            }
        }
    }

	return 0;
}