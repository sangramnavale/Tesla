#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int maxLength(std::vector<std::string>& arr) {
        std::vector<std::string> res {""};
        int maxLength = 0;

        for (auto i : arr) {
            for (auto j : res) {
                std::string maxRes = i + j;
                if (maxRes.size() != std::unordered_set<char>(maxRes.begin(), maxRes.end()).size()) {
                    continue;
                }
                res.push_back(maxRes);
                maxLength = std::max(maxLength, (int)maxRes.size());
            }
        }
        return maxLength;
    }
};

int main() {
    Solution s;
    std::vector<std::string> arr {"un","iq","ue"};
    int maxL = s.maxLength(arr);
    std::cout << maxL << std::endl;
    return 0;
}
