#include <bits/stdc++.h>
using namespace std;
void printIntersection(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else if (arr2[j] < arr1[i])
			j++;
		else /* if arr1[i] == arr2[j] */
		{
			cout << arr2[j] << " ";
			i++;
			j++;
		}
	}
}

/* Driver program to test above function */
int main()
{
 // main function
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
    //  for (int i = 0; i < n; i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    // for (int j = 0; j < m; j++)
    // {
    //     cout<<arr2[j]<<" ";
   // }

	// Function calling
	printIntersection(arr1, arr2, m, n);

	return 0;
}
