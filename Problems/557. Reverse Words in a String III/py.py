class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split(" ")
        for idx in range(len(words)):
            chars = list(words[idx])
            size = len(chars) - 1
            for i in range(0,(size)//2 + 1):
                c = chars[i]
                chars[i] = chars[size - i]
                chars[size - i] = c
            words[idx] = "".join(chars)
        return " ".join(words)   
        
    
        
        