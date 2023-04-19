#include <string>

using namespace std;

class Solution {
public:
    string maxValue(string n, int x) {
        if (n[0] == '-') {
            for (int i = 1; i < n.length(); i++) {
                if (n[i] - '0' > x) {
                    return n.substr(0, i) + to_string(x) + n.substr(i);
                }
            }
            return n + to_string(x);
        } else {
            for (int i = 0; i < n.length(); i++) {
                if (n[i] - '0' < x) {
                    return n.substr(0, i) + to_string(x) + n.substr(i);
                }
            }
            return n + to_string(x);
        }
    }
};

int main()
{

  Solution sol;
  string result = sol.maxValue("99", 9);
  cout << result << endl; // Output: "999"

  result = sol.maxValue("-13", 2);
  cout << result << endl; // Output: "-123"
  return 0;
}
