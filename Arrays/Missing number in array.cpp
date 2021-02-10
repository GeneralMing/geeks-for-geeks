/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Missing number in array

    Problem Statement:
    Given an array of size N-1 such that it can only contain distinct integers in the range of 1 to N. Find the missing element.

    Example 1:
    Input:
    N = 5
	A[] = {1,2,3,5}

    Output:
    4
    
    Explanation: Missing number is 4 since the progression is not followed after 3

    Example 2:
    Input:
    N = 10
	A[] = {1,2,3,4,5,6,7,8,10}
    
    Output:
    9
    
    Explanation: Missing number is 9 since the progression is not followed after 8

    Constraints:
    1 ≤ N ≤ 10^6
	1 ≤ A[i] ≤ 10^6

    Expected Time Complexity: O(N)
	Expected Auxiliary Space: O(1)

    Execution Time: 0.40

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code

#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> &array, int n);

// Position this line where user code will be pasted.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		vector<int> array(n - 1);
		for (int i = 0; i < n - 1; ++i)
			cin >> array[i];

		cout << MissingNumber(array, n) << "\n";
	}
	return 0;
} 
// End of Driver Code

int MissingNumber(vector<int> &array, int n)
{
	// Your code goes here
	int total = n * (n + 1) / 2;
	for (int i = 0; i < n - 1; i++)
		total -= array[i];
	return total;
}