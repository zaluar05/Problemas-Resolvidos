#include <unordered_set>
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    std::set<int> numeros;
    for (const int &n : nums) {
      numeros.insert(n);
    }
    nums.clear();
    for (int m : numeros) {
      nums.push_back(m);
    }
    return numeros.size();
  }
};
