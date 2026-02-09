class Solution {
public:
  bool isPalindrome(int x) {
    string y = to_string(x);
    string num = y;
    reverse(y.begin(), y.end());
    if (num == y)
      return true;
    else
      return false;
  }
};
