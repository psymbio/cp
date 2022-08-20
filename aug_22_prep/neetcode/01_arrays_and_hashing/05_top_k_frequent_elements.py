class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for num in nums:
            if num not in freq:
                freq[num] = 1
            else:
                freq[num] += 1
        freq_sorted = sorted(freq.items(), key=lambda x: x[1], reverse=True)
        result = []
        for i in range(0, k):
            result.append(freq_sorted[i][0])
        return result
        