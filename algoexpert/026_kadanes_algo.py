# time complexity: O(n)
# space complexity: O(1)
def kadane(array):
    running_sum = array[0]
    curr_sum = array[0]
    for i in range(1, len(array)):
        curr_sum = max(array[i], curr_sum + array[i])
        running_sum = max(curr_sum, running_sum)
    return running_sum

array = [3, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3, 1, -5, 4]
print(kadane(array))
