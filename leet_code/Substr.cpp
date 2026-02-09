#include <unordered_set>
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    std::unordered_set<char> tam;
    int melhor_seq = -1;
    int seq_atual = 1;
    for (char c : s) {
      if (tam.count(c)) {
        seq_atual = 1;
        tam.clear();
      } else {
        seq_atual++;
        melhor_seq = max(melhor_seq, seq_atual);
      }
    }
    return melhor_seq;
  }
};
