class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    std::map<int, int> faltas;
    for (int i = 0; i < nums.size(); i++) {
      int falta = target - nums[i];
      if (faltas.count(falta)) {
        std::vector<int> retornar = {faltas[falta], i};
        return retornar;
      } else {
        faltas[target - nums[i]] = i;
      }
    }
    return {};
  }
};
