class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        strs_sorted = ["".join(sorted(x)) for x in strs]
        result = {}
        for i in range(0, len(strs)):
            if strs_sorted[i] not in result:
                result[strs_sorted[i]] = [strs[i]]
            else:
                result[strs_sorted[i]].append(strs[i])
        final_result = []
        for key, value in result.items():
            final_result.append(value)
        return final_result