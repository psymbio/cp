# normal way
def print_fib_seq_normal(n):
    a = 0
    b = 1
    for i in range(1, n):
        c = a + b
        print(c)
        a = b
        b = c

# dp way
def print_fib_seq_dp(n):
    elements = [0, 1]
    for i in range(1, n):
        elements.append(elements[-1] + elements[-2])
    print(elements)

def print_fib_seq_recursive(n, answer):
    if n == 1:
        return 1
    elif n == 0:
        return 0
    else:
        answer += print_fib_seq_recursive(n - 1, answer) + print_fib_seq_recursive(n - 2, answer)
    return answer

print("first way: ")
print_fib_seq_normal(10)
print("second way: ")
print_fib_seq_dp(10)
print("third way: ")
nth_val = print_fib_seq_recursive(10, 0)
print(nth_val)
