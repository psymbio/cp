def convert_to_title(column_number):
    result = ""
    while column_number:
        column_number -= 1
        char = chr(column_number % 26) + 'A'
        result = char + result
        column_number //= 26
    print(result)

def convertToTitle(self, num):
    capitals = [chr(x) for x in range(ord('A'), ord('Z')+1)]
    result = []
    while num > 0:
        result.append(capitals[(num-1)%26])
        num = (num-1) // 26
    result.reverse()
    return ''.join(result)

convert_to_title(28)
convert_to_title(701)
