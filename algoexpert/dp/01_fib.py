# time complexity: O(2^n)
# space complexity: O(2^n)
def fib(n):
    if n <= 2:
        return 1
    return fib(n - 1) + fib(n - 2)

def fib2(n, fib_hash = {}):
    print(fib_hash)
    if n<= 2:
        return 1
    if n in fib_hash:
        return fib_hash[n]
    fib_hash[n] = fib2(n - 1, fib_hash) + fib2(n - 2, fib_hash)
    
    return fib_hash[n]

a = 40

print("trying fib1")
for i in range(a-1, a):
    print(fib(i))

print("trying fib2")
for i in range(a-1, a):
    print(fib2(i))
