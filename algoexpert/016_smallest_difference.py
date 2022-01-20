import math
a = [-1, 5, 10, 20, 28, 3]
b = [26, 134, 135, 15, 17]

def smallest_diff(a, b):
    a = sorted(a)
    b = sorted(b)
    a_left = 0
    b_left = 0
    min_dist = float('inf')
    val_1, val_2 = 0, 0
    while a_left < len(a) and b_left < len(b):
        # print(math.sqrt(a[a_left]**2 - b[b_left]**2))
        if (min_dist > (a[a_left] - b[b_left])):
            val_1 = a[a_left]
            val_2 = b[b_left]
            min_dist = a[a_left] - b[b_left]
        if a[a_left] < b[b_left]:
            a_left += 1
        elif a[a_left] > b[b_left]:
            b_left += 1
    return val_1, val_2

print(smallest_diff(a, b))
