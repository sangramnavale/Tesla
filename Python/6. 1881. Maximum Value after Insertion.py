class Solution:
    def maxValue(self, n: str, x: int) -> str:
        if n[0] == "-":
          for i in range(1, len(n)):
            if(int(n[i]) > x):
              return n[:i] + str(x) + n[i:]
          return n + str(x)
        else:
          for i in range(len(n)):
            if(int(n[i]) < x):
              return n[:i] + str(x) + n[i:]
          return n + str(x)
print(maximum_number("99", 9))  # output: "999"
print(maximum_number("-13", 2))  # output: "-123"
