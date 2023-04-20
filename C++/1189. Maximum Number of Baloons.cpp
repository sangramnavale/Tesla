# include <bits/stdc++.h>
using namespace std;

class Solution{
public: 
    int maxNumberOfBaloons(string text){
        
        int b = count(text.begin(), text.end(), 'b');
        int a = count(text.begin(), text.end(), 'a');
        int l = count(text.begin(), text.end(), 'l') / 2;
        int o = count(text.begin(), text.end(), 'o') / 2;
        int n = count(text.begin(), text.end(), 'n');
        
        return min({b, a, l , o, n});
    }   
};

int main()
{
    Solution s;
    int maxNo = s.maxNumberOfBaloons("balon");
    int maxNo2 = s. maxNumberOfBaloons("nlaebolko");
    cout << maxNo << endl;
    cout << maxNo2 << endl;
    return 0;
}
