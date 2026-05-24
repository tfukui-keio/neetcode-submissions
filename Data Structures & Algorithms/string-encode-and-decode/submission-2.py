class Solution:

    def encode(self, strs: List[str]) -> str:
        answer = ""
        for s in strs:
            prefix = "#" + str(len(s)) + "#"
            answer += prefix + s
        print(answer)
        return answer

    def decode(self, s: str) -> List[str]:
        answer = []
        i = 0
        while i < len(s):
            j = i + 1
            while s[j] != '#':  # 2個目の # を探す
                j += 1
            length = int(s[i+1:j])       # "#" の次から2個目の "#" まで
            answer.append(s[j+1:j+1+length])
            i = j + 1 + length           # 次の文字列の先頭 "#" へ
        return answer
            
