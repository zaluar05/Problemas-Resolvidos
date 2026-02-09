#include <iterator>
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string res = "";
    if (strs.size() == 1)
      return strs[0];
    sort(std::begin(strs), end(strs));
    for (int i = 0; i < strs[0].size(); i++) {
      if (strs[0][i] == strs.back()[i]) {
        res += strs[0][i];
      } else {
        break;
      }
    }
    for (int i = 0; i < strs.size(); i++) {
      for (int j = 0; j < res.size(); j++) {
        if (strs[i][j] != res[j]) {
          return "";
        }
      }
    }
    return res;
  }
};
