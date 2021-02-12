/*
    Solution to GeeksforGeeks problem stack Strings

    Title: Anagram

    Problem Statement:
    Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an 
	anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order 
	of characters can be different. For example, “act” and “tac” are an anagram of each other.

    Example 1:
    Input:
    a = geeksforgeeks, b = forgeeksgeeks

    Output:
    YES
    
    Explanation: Both the string have same characters with same frequency. So, both are anagrams.

    Example 2:
    Input:
    a = allergy, b = allergic
    
    Output:
    NO
    
    Explanation: Characters in both the strings are not same, so they are not anagrams.

    Constraints:
    1 ≤ |a|,|b| ≤ 10^5

    Expected Time Complexity: O(|a| + |b|).
	Expected Auxiliary Space: O(1).

    Execution Time: 0.01

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <bits/stdc++.h>
using namespace std;

// Break in Driver Code 

bool isAnagram(string a, string b)
{

	// Your code here
	int n = a.length();
	int alpha[26], beta[26];
	for (int i = 0; i < 26; i++)
	{
		alpha[i] = 0;
		beta[i] = 0;
	}

	if (n != b.length())
		return false;

	for (int i = 0; i < n; i++)
	{
		alpha[a.at(i) - 97]++;
		beta[b.at(i) - 97]++;
	}
	for (int i = 0; i < 26; i++)
		if (alpha[i] != beta[i])
			return false;
	return true;
}

// Resume Driver Code

int main()
{

	int t;

	cin >> t;

	while (t--)
	{
		string c, d;

		cin >> c >> d;

		if (isAnagram(c, d))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
// End of Driver Code