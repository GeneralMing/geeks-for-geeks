/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Leaders in an array

    Problem Statement:
    Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is 
	greater than or equal to all the elements to its right side. The rightmost element is always a leader.

    Example 1:
    Input:
    N = 6
	A[] = {16,17,4,3,5,2}

    Output:
    17 5 2
    
    Explanation: The first leader is 17 as it is greater than all the elements to its right. Similarly, the next leader is 5. The 
	right most element is always a leader so it is also included.

    Example 2:
    Input:
    N = 5
	A[] = {1,2,3,4,0}
    
    Output:
    4 0
    
    Explanation: The first leader is 4 as it is greater than all the elements to its right. Similarly, the next leader is 0. The 
	right most element is always a leader so it is also included.

    Constraints:
    1 <= N <= 10^7
	1 <= A[i] <= 10^7

    Expected Time Complexity: O(N)
	Expected Auxiliary Space: O(N)

    Execution Time: 0.88

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code

#include <bits/stdc++.h>
using namespace std;

// Break in Driver Code

vector<int> leaders(int arr[], int n)
{
	// code here
	vector<int> x;
	x.push_back(arr[n - 1]);
	for (int i = n - 2; i >= 0; i--)
	{
		if (arr[i] >= x[x.size() - 1])
			x.push_back(arr[i]);
	}
	reverse(x.begin(), x.end());
	return x;
}

// Resume Driver Code

int main()
{
	long long t;
	cin >> t; //testcases
	while (t--)
	{
		long long n;
		cin >> n; //total size of array

		int a[n];

		//inserting elements in the array
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		//calling leaders() function
		vector<int> v = leaders(a, n);

		//printing elements of the vector
		for (auto it = v.begin(); it != v.end(); it++)
		{
			cout << *it << " ";
		}

		cout << endl;
	}
}
// End of Driver Code