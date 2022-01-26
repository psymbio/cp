# time complexity: O(n^2)
# space complexity: O(1)
def dutch(elements):
    pivot = 2
    for i in range(0, len(elements)):
        for j in range(i+1, len(elements)):
            if elements[j] < pivot:
                elements[i], elements[j] = elements[j], elements[i]
    print(elements)
    for i in range(len(elements) - 1, 0, -1):
        for j in range(i - 1, 0, -1):
            if elements[j] > pivot:
                elements[i], elements[j] = elements[j], elements[i]
    print(elements)

# time complexity: O(n)
# space complexity: O(1)
def dutch_2(elements):
    pivot = 2
    left, right = 0, len(elements) - 1
    while left < right:
        if elements[left] < pivot:
            # do nothing
            left += 1
        else:
            # swap
            elements[left], elements[right] = elements[right], elements[left]
            right -= 1
    print(elements)

    left, right = 0, len(elements) - 1
    while left < right:
        if elements[left] > pivot:
            # do nothing
            elements[left], elements[right] = elements[right], elements[left]
            right -= 1
        else:
            # do nothing
            left += 1
    print(elements)

elements = [1, 2, 3, 1, 1, 2, 3, 1, 2, 3, 2, 1]
dutch_2(elements)
