array = [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7]

# time complexity O(N)
# space complexity O(1)
def find_three_largest(array):
    first, second, third = float('-inf'), float('-inf'), float('-inf')
    for num in array:
        if num > second and num > first and num > third:
            third = second
            second = first
            first = num
        elif num > second and num > third:
            third = second
            second = num
        elif num > third:
            third = num
    return first, second, third

# TODO: find 3 largest nums from the video
print(find_three_largest(array))
