class Solution:
    def minOperations(self, s: str) -> int:
        # Create a helper function to check for
        # every starting charachter amongst '0' and '1'
        def count_changes(start_char):
            changes = 0
            curr_char = start_char
            for i in range(len(s)):
                if(s[i] == curr_char):
                    changes += 1
                curr_char = '0' if curr_char == '1' else '1'
            return changes
        return min(count_changes('0'), count_changes('1'))
s = "0100"
print(minOperations(s)) # Output: 1

s = "10"
print(minOperations(s)) # Output: 0

s = "1111"
print(minOperations(s)) # Output: 2
