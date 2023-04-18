class Solution:
    def sumZero(self, n: int) -> List[int]:
        if n == 1:
            return [0]
        res = []
        for i in range(1, n//2 + 1):
            res.append(i)
            res.append(-i)
        if n % 2 != 0:
            res.append(0)
        return res
s = Solution()
n = 3
result = []
result = s.sumZero(n);
for i in range(len(result)):
    print(result[i])
