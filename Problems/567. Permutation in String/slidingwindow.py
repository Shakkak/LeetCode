class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        
        freqs1 = [0]*26
        for char in s1:
            freqs1[ord(char) - ord('a')] += 1
        
        freqs2 = [0]*26

        start = end =  0

        while end<len(s2):
            freqs2[ord(s2[end]) - ord('a')] += 1

            if freqs2 == freqs1:
                return True
            
            if (end - start + 1 < len(s1)):
                end += 1
            else:
                freqs2[ord(s2[start]) - ord('a')] -= 1
                end += 1
                start +=1
        return False

