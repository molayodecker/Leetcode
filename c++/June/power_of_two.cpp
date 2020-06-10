// Input: 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: 218
// Output: false

#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
  bool isPowerOfTwo(int n) { 
      if (n <= 0 ) {
          return false;
      }
      return (n & (n - 1)) == 0 ? true : false; 
      }
};

int main() {
  Solution s;
  for (size_t t = 0; t < 1000; t++) {
    cout << t << " - " << s.isPowerOfTwo(t) << "\n";
  }
  return 0;
}