#include <unordered_map>
class Solution {
public:
  int romanToInt(string s) {
    std::unordered_map<char, int> letras;
    letras = {
        {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000},
    };
    int sum = 0;
    for (int i = 0; i < s.size();) {
      if (letras[s[i]] < letras[s[i + 1]] && i != s.size() - 1) {
        sum += letras[s[i + 1]] - letras[s[i]];
        i += 2;
      } else {
        sum += letras[s[i]];
        i++;
      }
    }
    return sum;
  }
};
