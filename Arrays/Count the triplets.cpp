/*
    Solution to GeeksforGeeks problem stack Arrays

    Title: Count the triplets

    Problem Statement:
    Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

    Example 1:
    Input:
    N = 4
    arr[] = {1,5,3,2}

    Output:
    2

    Explanation: There are 2 triplets: 
                 1 + 2 = 3 and 3 +2 = 5

    Example 2:
    Input: 
    N = 3
    arr[] = {2,3,4}
    
    Output:
    0
    
    Explanation: No such triplet exits

    Constraints:
    1 ≤ N ≤ 10^3
    1 ≤ arr[i] ≤ 10^5

    Expected Time Complexity: O(N^2)
    Expected Auxiliary Space: O(1)

    Execution Time: 0.53

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <bits/stdc++.h>
using namespace std;
// Break of Driver Code

class Solution{
public: 
    
    int countTriplet(int arr[], int n)
    {
        // Your code goes here
        int count = 0;
        sort(arr, arr+n);
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                for(int k = j+1; k < n; k++)
                    if(arr[i]+arr[j] == arr[k])
                        count++;
        return count;
    }
};

class Solution{
public: 
    
    int countTriplet(int arr[], int n)
    {
        // Your code goes here
        int count = 0;
        sort(arr, arr+n);
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                for(int k = j+1; k < n; k++)
                    if(arr[i]+arr[j] == arr[k])
                        count++;
        return count;
    }
};

// Resuming Driver Code
int main() 
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// End of Driver Code