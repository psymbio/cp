def can_sum(target_sum, numbers):
    if target_sum == 0:
        return True
    if target_sum < 0:
        return False
    for number in numbers:
        remainder = target_sum - number
        print("rem: ", remainder)
        if (can_sum(remainder, numbers) == True):
            return True
    return False

def can_sum_dp(target_sum, numbers, cs_hash = {}):
    if target_sum == 0:
        return True
    if target_sum < 0:
        return False
    if target_sum in cs_hash:
        return cs_hash[target_sum]
    for number in numbers:
        remainder = target_sum - number
        print(cs_hash)
        if (can_sum_dp(remainder, numbers, cs_hash) == True):
            cs_hash[remainder] = True
            return True
        else:
            cs_hash[remainder] = False

    return False
print(can_sum_dp(714, [7, 14]))
