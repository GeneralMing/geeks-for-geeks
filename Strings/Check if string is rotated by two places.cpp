/*
    Solution to GeeksforGeeks problem stack Strings

    Title: Check if string is rotated by two places

    Problem Statement:
    Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

    Example 1:
    Input:
    a = amazon
	b = azonam

    Output:
    1
    
    Explanation: amazon can be rotated anti clockwise by two places, which will make it as azonam.

    Example 2:
    Input:
    a = geeksforgeeks
	b = geeksgeeksfor
    
    Output:
    0
    
    Explanation: If we rotate geeksforgeeks by two place in any direction , we won't get geeksgeeksfor.

    Constraints:
    1 <= length of a, b < 100

    Expected Time Complexity: O(N).
	Expected Auxiliary Space: O(N).

    Execution Time: 0.01

    https://github.com/GeneralMing/geeks-for-geeks
*/

// Start of Driver Code
#include <bits/stdc++.h>
using namespace std;

// Break in Driver Code

string rotate_right(string s)
{
	string x = "";
	int n = s.length();
	x += s.at(n - 1);
	for (int i = 0; i < n - 1; i++)
		x += s.at(i);
	return x;
}

string rotate_left(string s)
{
	string x = "";
	int n = s.length();
	for (int i = 1; i < n; i++)
		x += s.at(i);
	x += s.at(0);
	return x;
}
bool isRotated(string str1, string str2)
{
	// Your code here
	str1 = rotate_left(str1);
	str1 = rotate_left(str1);
	if (str1 == str2)
		return true;
	else
	{
		str1 = rotate_right(str1);
		str1 = rotate_right(str1);
		//original mode
		str1 = rotate_right(str1);
		str1 = rotate_right(str1);

		if (str1 == str2)
			return true;
		else
			return false;
	}
}

// Resume Driver Code

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		string b;
		cin >> s >> b;
		cout << isRotated(s, b) << endl;
	}
	return 0;
}
// End of Driver Code