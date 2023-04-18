from typing import List
class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        prev, prevTime = '#', 0
        totalTime = 0
        for i in range(len(colors)):
            if colors[i] != prev:
                prev, prevTime = colors[i], neededTime[i]
            else:
                totalTime += min(prevTime, neededTime[i])
                if prevTime < neededTime[i]:
                    prevTime = neededTime[i]
        return totalTime

s = Solution()
colors = "abaac"
neededTime = [1,2,3,4,5]
totalTime = s.minCost(colors, neededTime)
print(totalTime)
