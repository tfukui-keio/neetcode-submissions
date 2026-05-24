class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dictionary = {}
        for value in strs:
            sorted_value = tuple(sorted(value))
            index = dictionary.get(sorted_value, None)
            
            if index == None:
                dictionary[sorted_value] = []
                
            dictionary[sorted_value].append(value)

        answer = []
        for key,value in dictionary.items():
            answer.append(value)

        return answer