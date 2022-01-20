original_list = [5, 2, [7, -1], 3, [6, [-13, 8], 4]]
def product_sum(original_list, multiplier):
    sum = 0
    for i in original_list:
        if type(i) is list:
            sum += product_sum(i, multiplier + 1)
        else:
            sum += i
    return sum * multiplier

print(product_sum(original_list, 1))
