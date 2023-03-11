class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        MAX = 0
        for i in range(len(s)):
            L = []
            for j in range(i,len(s)):
                if s[j] not in L:
                    L.append(s[j])
                else:
                    break
            if len(L)>MAX:
                MAX = len(L)
        return MAX

