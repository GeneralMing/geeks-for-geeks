/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Rearrange Array Alternately

    Problem Statement:
    Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element 
	should be max value, second should be min value, third should be second max, fourth should be second min and so on.

    Example 1:
    Input:
    N = 6
	arr[] = {1,2,3,4,5,6}

    Output:
    6 1 5 2 4 3
    
    Explanation: Max element = 6, min = 1, second max = 5, second min = 2, and so on... Modified array is : 6 1 5 2 4 3.

    Example 2:
    Input:
    N = 11
	arr[]={10,20,30,40,50,60,70,80,90,100,110}
    
    Output:
    110 10 100 20 90 30 80 40 70 50 60
    
    Explanation: Max element = 110, min = 10, second max = 100, second min = 20, and so on... Modified array is : 
	110 10 100 20 90 30 80 40 70 50 60.

    Constraints:
    1 <= N <= 10^7
	1 <= arr[i] <= 10^7

    Expected Time Complexity: O(N)
	Expected Auxiliary Space: O(1)

    Execution Time: 0.44

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code

#include <bits/stdc++.h>
using namespace std;

// Break in Driver Code
void rearrange(long long *arr, int n)
{

	// Your code here
	long long list[n], x = 0;
	for (int i = 0; i < n; i++)
		list[i] = arr[i];
	for (int i = 1; i < n; i += 2)
		arr[i] = list[x++];
	x = n - 1;
	for (int i = 0; i < n; i += 2)
		arr[i] = list[x--];
}

// Resuming Driver Code.

int main()
{
	int t;

	//testcases
	cin >> t;

	while (t--)
	{

		//size of array
		int n;
		cin >> n;

		long long arr[n];

		//adding elements to the array
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		//calling rearrange() function
		rearrange(arr, n);

		//printing the elements
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";

		cout << endl;
	}
	return 0;
}
// Driver Code Ends