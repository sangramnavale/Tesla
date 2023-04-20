class Solution:
    def maxLength(self, arr: List[str]) -> int:
        res = [""]  # Creating a list with empty string
        maxLength = 0

        for i in arr:
            for j in res:
                maxRes = i + j
                if(len(maxRes) != len(set(maxRes))):
                    continue
                # Continue : Current iteration is skipped and we move to execute further st.
                # Break: Current iteration is skipped and we do not execute further st.
                res.append(maxRes)
                maxLength = max(maxLength, len(maxRes))
        return maxLength

s = Solution()
arr = ["un","iq","ue"]
maxL = s.maxLength(arr)
print(maxL)
