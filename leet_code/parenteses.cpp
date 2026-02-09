#include <stack>
class Solution {
public:
  bool isValid(string s) {
    std::stack<char> entradas;
    for (const char &c : s) {
      if (c == '{' || c == '(' || c == '[') {
        entradas.push(c);
      } else {
        if (entradas.empty()) {
          return false;
        }

        char topo = entradas.top();
        if (c == '}' && topo != '{' || c == ')' && topo != '(' ||
            c == ']' && topo != '[') {
          return false;
        } else {
          entradas.pop();
        }
      }
    }
    return entradas.empty();
  }
};
