class Solution:

    def encode(self, strs: List[str]) -> str:
        answer = ""
        for s in strs:
            prefix = str(len(s)) + "#"
            answer += prefix + s
        return answer

    def decode(self, s: str) -> List[str]:
        answer = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != "#":
                j += 1
            length = int(s[i:j])
            i = j + 1
            j = i + length
            answer.append(s[i:j])
            i = j
        return answer
            
