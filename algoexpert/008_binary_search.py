elements = list(range(0, 100))
print(elements)

# O(log(N)) time everytime being cut by 2
# O(log(N)) space, because it occupies memory in the call stack
def binary_search(elements, target, left, right):
    if left > right:
        return -1
    mid = (left + right) // 2
    print(elements[mid])
    if target == elements[mid]:
        print("element at: ", mid)
        return mid
    elif target < elements[mid]:
        binary_search(elements, target, left, mid - 1)
    else:
        binary_search(elements, target, mid + 1, right)

# O(log(N)) time
# O(1) space
def binary_search_itr(elements, target):
    left = 0
    right = len(elements)
    while left <= right:
        mid = (left + right) // 2
        print("mid now: ", mid)
        if target == elements[mid]:
            return mid
        elif target < elements[mid]:
            right = mid - 1
        else:
            left = mid + 1
    return -1

print("recursive approach")
binary_search(elements, 26, 0, len(elements))
print("iterative approach")
print("element at: ", binary_search_itr(elements, 26))
