def palindrome_check(a):
    left = 0
    right = len(a) - 1 
    is_palin = False
    while left <= right:
        if a[left] == a[right]:
            is_palin = True
        else:
            is_palin = False
            return is_palin
        left += 1
        right -= 1
    return is_palin

print(palindrome_check("abbcbba"))
print(palindrome_check("cat"))
