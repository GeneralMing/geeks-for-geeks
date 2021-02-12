/*
    Solution to GeeksforGeeks problem stack Strings

    Title: Recursively remove all adjacent duplicates

    Problem Statement:
    Given a string s, recursively remove adjacent duplicate characters from the string s. The output string should not have any 
	adjacent duplicates.

    Example:
    Input:
    2
	geeksforgeek
	acaaabbbacdddd

    Output:
    gksforgk
	acac
    
    Explanation: The resultant string after removing the duplicates for 'e' and 'a' and 'b' and 'd' is 'gksforgk' and 'acac'.

    Constraints:
    1<=T<=100
	1<=Length of string<=50

    Expected Time Complexity: O(N)
	Expected Auxiliary Space: O(N)

    Execution Time: 0.01

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Break in Driver Code

string recurse(string s, int i)
{
	int n = s.length();
	if (i >= n - 1)
		return s;
	else if (s.at(i) == s.at(i + 1))
	{
		int count = 0;
		char x = s.at(i);
		int j = i;
		while (j < n && s.at(j) == x)
		{
			count++;
			j++;
		}
		s.erase(i, count);
		return recurse(s, i);
	}
	else
		return recurse(s, i + 1);
}

// Resume Driver Code
int main()
{
	//code
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int n = s.length();
		for (int i = 0; i < n; i++)
			s = recurse(s, 0);
		cout << recurse(s, 0) << endl;
	}
	return 0;
}
// End of Driver Code