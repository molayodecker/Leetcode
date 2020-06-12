// Input: [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  void sortColors(vector<int> &nums) {
    int curr = 0;
    int left = 0;
    int right = nums.size() - 1;
    while (curr <= right) {
      if (nums.at(curr) == 2) {
        swap(nums[curr], nums[right]);
        right -= 1;
      } else if (nums.at(curr) == 0) {
        swap(nums[curr], nums[left]);
        curr += 1;
        left += 1;
      } else {
        curr += 1;
      }
    }
    // cout << nums.begin() << "\n";
  }
  void swap(int &a, int &b) {
       int c = b;
       b = a;
       a = c;
  }
};

int main() {
  vector<int> nums = {2, 0, 2, 1, 1, 0};
  Solution s;
  s.sortColors(nums);
  for (auto itr : nums)
    cout << itr << " ";
  return 0;
}
