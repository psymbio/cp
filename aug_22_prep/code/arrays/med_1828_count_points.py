class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        result = [0] * len(queries)
        for i, query in enumerate(queries):
            for point in points:
                if ((point[0] - query[0])**2 + (point[1] - query[1])**2)**0.5 <= query[2]:
                    result[i] += 1
        return result