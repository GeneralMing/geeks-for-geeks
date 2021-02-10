/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Kadane's Algorithm

    Problem Statement:
    Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

    Example 1:
    Input:
    N = 5
	arr[] = {1,2,3,-2,5}

    Output:
    9
    
    Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.

    Example 2:
    Input:
    N = 4
	arr[] = {-1,-2,-3,-4}
    
    Output:
    -1
    
    Explanation: Max subarray sum is -1 of element (-1)

    Constraints:
    1 ≤ N ≤ 10^6
	-10^7 ≤ A[i] <= 10^7

    Expected Time Complexity: O(N)
	Expected Auxiliary Space: O(1)

    Execution Time: 0.27

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <bits/stdc++.h>
using namespace std;

// Break of Driver Code

bool negative(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		if (arr[i] >= 0)
			return false;
	return true;
}

int min(int arr[], int n)
{
	int m = INT_MAX;
	for (int i = 0; i < n; i++)
		if (m > arr[i])
			m = arr[i];
	return m;
}

int maxSubarraySum(int arr[], int n)
{

	// Your code here
	if (!negative(arr, n))
	{
		int max = 0, all_time_max = 0;
		for (int i = 0; i < n; i++)
		{
			max += arr[i];
			if (max > all_time_max)
				all_time_max = max;
			if (max < 0)
				max = 0;
		}
		return all_time_max;
	}
	else
		return min(arr, n);
}

// Resume Driver Code

int main()
{
	int t, n;

	cin >> t;	//input testcases
	while (t--) //while testcases exist
	{

		cin >> n; //input size of array

		int a[n];

		for (int i = 0; i < n; i++)
			cin >> a[i]; //inputting elements of array

		cout << maxSubarraySum(a, n) << endl;
	}
}
// End of Driver Code