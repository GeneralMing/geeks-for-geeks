/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Subarray with given sum

    Problem Statement:
    Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

    Example 1:
    Input:
    N = 5, S = 12
    A[] = {1,2,3,7,5}

    Output:
    2 4
    
    Explanation: The sum of elements from 2nd position to 4th position is 12.

    Example 2:
    Input:
    N = 10, S = 15
    A[] = {1,2,3,4,5,6,7,8,9,10}
    
    Output:
    1 5
    
    Explanation: The sum of elements from 1st position to 5th position is 15.

    Constraints:
    1 <= N <= 105
    1 <= A[i] <= 1010

    Expected Time Complexity: O(N)
    Expected Auxiliary Space: O(1)

    Execution Time: 0.43

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <bits/stdc++.h>
using namespace std;
// Break of Driver Code

vector<int> subarraySum(int arr[], int n, int s)
{    
    // Your code here
    int total = 0;
    vector<int> ret;
    int i = -1, j = -1;
    while(i <= j && j < n)
    {
        if(total < s)
            total += arr[++j];
        else if(total > s)
            total -= arr[++i];
        else
        {
            ret.push_back(i+2);
            ret.push_back(j+1);
            break;
        }
    }
    if(j >= n || i > j)
        ret.push_back(-1);

    return ret;
}

// Resuming Driver Code
int main()
 {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        
        vector<int> res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
	return 0;
}
// End of Driver Code