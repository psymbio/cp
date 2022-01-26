def how_sum(target_sum, numbers, how_sum_hash, add_up):
    if target_sum == 0:
        return True, add_up
    if target_sum < 0:
        return False, []
    if target_sum in how_sum_hash:
        return True, []
    print(add_up)
    for number in numbers:
        remainder = target_sum - number
        add_up += [number]
        bool_val, _ = how_sum(remainder, numbers, how_sum_hash, add_up)
        if (bool_val == True):
            how_sum_hash[remainder] = True
            return True, []
    return False, []

def how_sum2(target_sum, numbers, how_sum_hash = {}):
    if target_sum == 0:
        return []
    if target_sum < 0:
        return None
    if target_sum in how_sum_hash:
        return how_sum_hash[target_sum]

    for number in numbers:
        remainder = target_sum - number
        remainder_sum = how_sum2(remainder, numbers, how_sum_hash)
        print(remainder_sum)
        if (remainder_sum is not None):
            how_sum_hash[target_sum] = [number, *remainder_sum]
            return how_sum_hash[target_sum]
    how_sum_hash[target_sum] = None
    return how_sum_hash[target_sum]
print(how_sum2(7, [2, 3]))
print(how_sum2(7, [5, 4, 3, 7]))
print(how_sum2(7, [2, 4]))
print(how_sum2(8, [2, 3, 3, 5]))
