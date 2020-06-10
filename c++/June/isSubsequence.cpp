// Given a string s and a string t, check if s is subsequence of t.

// A subsequence of a string is a new string which is formed from the original
// string by deleting some (can be none) of the characters without disturbing
// the relative positions of the remaining characters. (ie, "ace" is a
// subsequence of "abcde" while "aec" is not).

// Follow up:
// If there are lots of incoming S, say S1, S2, ... , Sk where k >= 1B, and you
// want to check one by one to see if T has its subsequence. In this scenario,
// how would you change your code?

// Credits:
// Special thanks to @pbrother for adding this problem and creating all test
// cases.

// Example 1:

// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:

// Input: s = "axc", t = "ahbgdc"
// Output: false

// Constraints:

// 0 <= s.length <= 100
// 0 <= t.length <= 10^4
// Both strings consists only of lowercase characters.

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  bool isSubsequence(string s, string t) {
    if (s.length() == 0) {
        return true;
    }
    int i = 0;
    int len  = t.length();
    int s_pos = 0;
    string str = "";
    while (i < len) {
      if (t[i] == s[s_pos] && s_pos < s.length() ) {
        str += s[s_pos];
        s_pos++;
      }
      i++;
    }
    return s == str;
  }
};

int main() {
  string f = {"abc"};
  string t = {"ahbgdc"};
  Solution s;
  bool result = s.isSubsequence(f, t);
  cout << result << "\n";
  return 0;
};

// "acb"
// "ahbgdc"