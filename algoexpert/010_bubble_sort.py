array = [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7]

def swap(a, b):
    return b, a
# time complexity O(n^2)
# space complexity O(1)
def bubble_sort(array):
    for i in range(0, len(array)):
        for j in range(i + 1, len(array)):
            if array[i] > array[j]:
                array[i], array[j] = swap(array[i], array[j])
    return array

print(bubble_sort(array))
