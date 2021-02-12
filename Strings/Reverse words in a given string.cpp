/*
    Solution to GeeksforGeeks problem stack Strings

    Title: Reverse words in a given string

    Problem Statement:
    Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

    Example 1:
    Input:
    S = i.like.this.program.very.much

    Output:
    much.very.program.this.like.i
    
    Explanation: After reversing the whole string(not individual words), the input string becomes much.very.program.this.like.i

    Example 2:
    Input:
    S = pqr.mno
    
    Output:
    mno.pqr
    
    Explanation: After reversing the whole string , the input string becomes mno.pqr

    Constraints:
    1 <= |S| <= 2000

    Expected Time Complexity: O(|S|)
	Expected Auxiliary Space: O(|S|)

    Execution Time: 0.01

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of	Driver Code
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		cout << reverseWords(s) << endl;
	}
} 
// End of Driver Code
string reverseWords(string S)
{
	// code here
	string s = "";
	string out = "";
	for (int i = S.length() - 1; i >= 0; i--)
	{
		if (S.at(i) != '.')
			s += S.at(i);
		else
		{
			for (int j = s.length() - 1; j >= 0; j--)
				out += s.at(j);
			out += '.';
			s = "";
		}
	}
	for (int j = s.length() - 1; j >= 0; j--)
		out += s.at(j);
	return out;
}