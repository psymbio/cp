def palin(A):
    left, right = 0, len(A) - 1
    while left <= right:
        if A[left] != A[right]:
            return False
        left += 1
        right -= 1
    return True

print(palin([1, 2, 1]))
print(palin([1, 2, 2]))
