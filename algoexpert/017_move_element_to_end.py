a = [2, 1, 2, 2, 2, 3, 4, 2]

def swap(a, b):
    return b, a

# time complexity O(N)
# space complexity O(1)
def move_to_end(a, target):
    left = 0
    right = len(a) - 1 
    while left <= right:
        while a[right] == target and left < right:
            right -= 1
        if a[left] != target:
            left += 1
        else:
            a[left], a[right] = a[right], a[left]
    return a

print(move_to_end(a, 2))
