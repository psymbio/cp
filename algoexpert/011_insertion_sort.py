array = [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7]

def swap(a, b):
    return b, a

def insertion_sort(array):
    for i in range(1, len(array)):
        val = array[i]
        for j in range(i, 0, -1):
            if val < array[j]:
                array[i], array[j] = array[j], array[i]
    return array
print(insertion_sort(array))
