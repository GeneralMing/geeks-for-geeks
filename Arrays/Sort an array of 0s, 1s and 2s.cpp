/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Sort an array of 0s, 1s and 2s

    Problem Statement:
    Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

    Example 1:
    Input:
    N = 5
	arr[]= {0 2 1 2 0}

    Output:
    0 0 1 2 2
    
    Explanation: 0s 1s and 2s are segregated into ascending order.

    Example 2:
    Input:
    N = 3
	arr[] = {0 1 0}
    
    Output:
    0 0 1
    
    Explanation: 0s 1s and 2s are segregated into ascending order.

    Constraints:
    1 <= N <= 10^5
	0 <= A[i] <= 2

    Expected Time Complexity: O(N)
	Expected Auxiliary Space: O(1)

    Execution Time: 0.11

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <bits/stdc++.h>
using namespace std;
void sort012(int[], int);

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		sort012(a, n);

		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}

		cout << endl;
	}
	return 0;
}

// End of Driver Code

void sort012(int a[], int n)
{
	// Your code here
	int zero = 0, one = 0, two = 0;
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			zero++;
		if (a[i] == 1)
			one++;
		if (a[i] == 2)
			two++;
	}

	while (zero--)
		a[index++] = 0;
	while (one--)
		a[index++] = 1;
	while (two--)
		a[index++] = 2;
}