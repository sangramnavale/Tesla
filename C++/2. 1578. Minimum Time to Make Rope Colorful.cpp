#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        char prev = '#';
        int prevTime = 0;
        int totalTime = 0;
        for(int i = 0; i < colors.length(); i++){
            if(colors[i] != prev){
                prev = colors[i];
                prevTime = neededTime[i];
            }
            else{
                totalTime += min(prevTime, neededTime[i]);
                if(prevTime < neededTime[i])
                {
                    prevTime = neededTime[i];
                }
            }
        }
        return totalTime;
    }
};

int main()
{
    Solution s;
    string colors = "abaac";
    vector<int>neededTime = {1,2,3,4,5};
    
    int totalT = s.minCost(colors, neededTime);
    cout << "Minimum time: " << totalT << endl;
    return 0;
}
