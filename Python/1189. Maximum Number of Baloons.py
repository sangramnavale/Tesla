class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        b = text.count("b")
        print(b)
        a = text.count("a")
        print(a)
        l = text.count("l")//2  
        print(l)
        o = text.count("o")//2
        print(o)
        n = text.count("n")
        print(n)
        print(min(b, a, l, o, n))
        return min(b, a, l, o, n)

'''
 Note: Logic behind l = text.count("l")//2  and o = text.count("o")//2 for L and O 
 is that we consider the text to be valid unless we have 2 ls and 2 os in it. We then
 return the minimum number of each letter to get the no. of instances of the word 'baloon'.
'''
s = Soultion()
maxNo = s.maxNumberOfBalloons("balon") 
print(maxNo)    # Output: 0
 
maxNo2 = s.maxNumberOfBalloons("nlaebolko")
print(maxNo2)   # Output: 1
