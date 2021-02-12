/*
    Solution to GeeksforGeeks problem stack Strings

    Title: Longest Palindrome in a String

    Problem Statement:
    Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
	Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. Incase of conflict, 
	return the substring which occurs first ( with the least starting index ).

    Example:
    Input:
    1
	aaaabbaa

    Output:
    aabbaa
    
    Explanation: The longest palindrome string present in the given string is "aabbaa".

    Constraints:
    1 ≤ T ≤ 100
	1 ≤ Str Length ≤ 10^4

    Expected Time Complexity: O(N^2)
	Expected Auxiliary Space: O(N)

    Execution Time: 0.01

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Break in Driver Code

bool is_palindrome(string s)
{
	int n = s.length();
	for (int i = 0; i < n / 2; i++)
		if (s.at(i) != s.at(n - i - 1))
			return false;
	return true;
}

bool sub_palindrome(string s, int start, int end)
{
	string x = "";
	for (int i = start; i < end; i++)
		x += s.at(i);
	return is_palindrome(x);
}

string process(string s)
{
	// your code here
	int max = 0, start = 0, end = 0;
	int n = s.length();

	for (int l = n; l >= 1; l--)
		for (int i = 0; i <= n - l; i++)
			if (sub_palindrome(s, i, i + l))
				if (l > max)
				{
					max = l;
					start = i;
					end = i + l;
				}

	string x = "";

	for (int i = start; i < end; i++)
		x += s.at(i);

	return x;
}

// Resume Driver Code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		cout << process(s) << endl;
	}
	return 0;
}
// End of Driver Code