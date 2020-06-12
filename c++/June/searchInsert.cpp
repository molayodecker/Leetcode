// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You may assume no duplicates in the array.


#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    ll left = 0;
    ll right = nums.size() - 1;
    ll mid = 0;
    ll result = -1;
    while (left <= right) {
      mid = (left + right) / 2;
      if (target == nums.at(mid)) {
        return mid;
      } else if (target < nums.at(mid)) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    return left;
  }
};

int main() {
  // [1,3]
  //   2
  vector<int> nums = {1,3,5,6}; //[1,3,5,6], 7
  int target = 7;
  Solution s;
  int result = s.searchInsert(nums, target);
  cout << result << "\n";
  return 0;
}