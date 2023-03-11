class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        freqp = [0]*26
        for char in p:
            freqp[ord(char) - ord('a')] += 1
        
        freqs = [0]*26

        start = end =  0
        idx = []
        while end<len(s):
            freqs[ord(s[end]) - ord('a')] += 1

            if freqs == freqp:
                idx.append(start)
            
            if (end - start + 1 < len(p)):
                end += 1
            else:
                freqs[ord(s[start]) - ord('a')] -= 1
                end += 1
                start +=1
        return idx
