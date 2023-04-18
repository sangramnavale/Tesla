#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        for(int i = 1; i <= n / 2; i++)
        {
            res.push_back(i);
            res.push_back(-i);
        }
        if(n % 2 != 0)
        {
            res.push_back(0);
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> result = s.sumZero(5);
    cout << "Result for n = 5: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    result = s.sumZero(3);
    cout << "Result for n = 3: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    result = s.sumZero(1);
    cout << "Result for n = 1: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
