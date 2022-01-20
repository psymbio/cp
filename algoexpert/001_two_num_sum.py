# title: 1 Two Sum
two_sum = int(input("Enter the sum you want to find in the array: "))
n = int(input("Enter the number of elements in the list: "))
list_of_nums = []

for i in range(0, n):
    num = int(input("Enter element at " + str(i) + ": "))
    list_of_nums.append(num)

# brute force approach

# time complexity: O(N^2)
# space complexity: O(1) constant space
for i in range(0, n):
    for j in range(i + 1, n):
        if(j != i):
            if(list_of_nums[i] + list_of_nums[j] == two_sum):
                print("possible solution: ", list_of_nums[i], list_of_nums[j])

# optimized solution

# create a hash map and check if the inverse of the element exists.
# x has a y such that x + y = 10
# y = 10 - x
# if y exists in the hash map of existing number then a solution exists

# time complexity: O(N)
# space complexity: O(N)
hash_of_nums = {}
for i in range(0, n):
    if (two_sum - list_of_nums[i] in hash_of_nums):
        print("possible solution: ", list_of_nums[i], two_sum - list_of_nums[i])
        break
    else:
        hash_of_nums[list_of_nums[i]] = True

print(hash_of_nums)

# more optimised than brute and has lesser space complexity than hash
# time complexity O(N log(N))
# space complexity O(1)
sorted_list_of_nums = sorted(list_of_nums) # O(N lg(N))
print(sorted_list_of_nums)
flag_left = 0
flag_right = -1
for i in range(0, n):
    if (sorted_list_of_nums[flag_left] + sorted_list_of_nums[flag_right] < two_sum):
        flag_left += 1
    elif (sorted_list_of_nums[flag_left] + sorted_list_of_nums[flag_right] > two_sum):
        flag_right -= 1
    elif (sorted_list_of_nums[flag_left] + sorted_list_of_nums[flag_right] == two_sum):
        print("possible solution: ", sorted_list_of_nums[flag_left], sorted_list_of_nums[flag_right])
        break
