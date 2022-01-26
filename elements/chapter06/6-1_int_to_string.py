def int_string(num):
    is_neg = False
    if num < 0:
        num, is_neg = abs(num), True
    string = []
    while num:
        rem = num % 10
        c = chr(ord('0') + rem)
        string.insert(0, c)
        num //= 10
    string_int = "".join(string)
    if is_neg:
        string_int = "-" + string_int
    print(string_int)

def string_int(num):
    is_neg = False
    if num[0] == "-":
        num, is_neg = num[1:], True
    ten_power = 0
    result = 0
    for char in reversed(num):
        digit = ord(char) - ord('0')
        result += digit * (10 ** ten_power)
        ten_power += 1
    if is_neg:
        result = -1 * result
    print(result)

string_int("234784")
string_int("-234784")
int_string(-456)
int_string(123)
