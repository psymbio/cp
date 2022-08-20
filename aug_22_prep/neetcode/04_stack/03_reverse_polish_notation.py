class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        operators = {"+": 1, "-": 2, "*": 3, "/": 4}
        stack = []
        for token in tokens:
            if token in operators:
                if len(stack) >= 2:
                    a = stack.pop()
                    b = stack.pop()
                    if operators[token] == 1:
                        stack.append(a + b)
                    elif operators[token] == 2:
                        stack.append(b - a)
                    elif operators[token] == 3:
                        stack.append(a * b)
                    else:
                        stack.append(int(float(b) / a))
            else:
                stack.append(int(token))
        return int(stack[-1])