class Solution:
    def isValid(self, s: str) -> bool:
        bracket_pair = {"{": "}", "[": "]", "(": ")"}
        stack = []
        for char in s:
            if char in bracket_pair:
                stack.append(char)
            else:
                try:
                    bracket_popped = stack.pop()
                    if bracket_pair[bracket_popped] != char:
                        return False
                except:
                    return False
        if len(stack) == 0:
            return True
        return False