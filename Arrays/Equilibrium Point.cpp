/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Equilibrium Point

    Problem Statement:
    Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array.
	Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

    Example 1:
    Input:
    N = 1
	A[] = {1}

    Output:
    1
    
    Explanation: Since its the only element hence its the only equilibrium point.

    Example 2:
    Input:
    N = 5
	A[] = {1,3,5,2,2}
    
    Output:
    3
    
    Explanation: For second test case equilibrium point is at position 3 as elements before it (1+3) = elements after it (2+2).

    Constraints:
    1 <= N <= 10^6
	1 <= A[i] <= 10^8

    Expected Time Complexity: O(N)
	Expected Auxiliary Space: O(1)

    Execution Time: 0.50

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n);

int main()
{

	long long t;

	//taking testcases
	cin >> t;

	while (t--)
	{
		long long n;

		//taking input n
		cin >> n;
		long long a[n];

		//adding elements to the array
		for (long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		//calling equilibriumPoint() function
		cout << equilibriumPoint(a, n) << endl;
	}
	return 0;
}
// End of Driver Code

long long sum(long long a[], int n)
{
	long long total = 0;
	for (int i = 0; i < n; i++)
		total += a[i];
	return total;
}

int equilibriumPoint(long long a[], int n)
{

	// Your code here
	if (n == 1)
		return 1;
	else if (n == 2)
		return -1;
	else
	{
		long long sumLeft = a[0], sumRight = sum(a, n) - a[1] - a[0];
		int index = 1;
		while (sumLeft < sumRight && index < n)
		{
			sumLeft += a[index++];
			sumRight -= a[index];
		}
		if (sumLeft == sumRight)
			return index + 1;
		else
			return -1;
	}
}