#include <iostream>
#include <string>

int count_changes(std::string s, char start_char) {
    int changes = 0;
    char curr_char = start_char;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == curr_char) {
            changes += 1;
        }
        curr_char = '0' + '1' - curr_char;
    }
    return changes;
}

class Solution {
public:
    int minOperations(std::string s) {
        return std::min(count_changes(s, '0'), count_changes(s, '1'));
    }
};

int main() {
    Solution sol;
    std::string s = "0100";
    std::cout << sol.minOperations(s) << std::endl; // Output: 1

    s = "10";
    std::cout << sol.minOperations(s) << std::endl; // Output: 0

    s = "1111";
    std::cout << sol.minOperations(s) << std::endl; // Output: 2

    return 0;
}
