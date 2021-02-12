/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Minimum Platforms

    Problem Statement:
    Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the 
	railway station so that no train is kept waiting. Consider that all the trains arrive on the same day and leave on the same day. 
	Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of 
	the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. 
	In such cases, we need different platforms.

    Example 1:
    Input:
    N = 6
	arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
	dep[] = {0910, 1200, 1120, 1130, 1900, 2000}

    Output:
    3
    
    Explanation: Minimum 3 platforms are required to safely arrive and depart all trains.

    Example 2:
    Input:
    N = 3
	arr[] = {0900, 1100, 1235}
	dep[] = {1000, 1200, 1240}
    
    Output:
    1
    
    Explanation: Only 1 platform is required to safely manage the arrival and departure of all trains. 

    Constraints:
    1 <= N <= 1000
	1 <= A[i] < D[i] <= 2359

    Expected Time Complexity: O(N*Log(N))
	Expected Auxiliary Space: O(N)

    Execution Time: 0.03

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code

#include <bits/stdc++.h>
using namespace std;

// Break in Driver Code

int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	sort(arr, arr + n);
	sort(dep, dep + n);
	int i = 0, j = 0;
	int trains = 0, max = 1;
	while (i < n && j < n)
	{
		if (arr[i] <= dep[j])
		{
			trains++;
			i++;
		}
		else
		{
			trains--;
			j++;
		}
		if (trains > max)
			max = trains;
	}
	return max;
}

// Resume Driver Code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int dep[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int j = 0; j < n; j++)
		{
			cin >> dep[j];
		}
		cout << findPlatform(arr, dep, n) << endl;
	}
	return 0;
} // End of Driver Code