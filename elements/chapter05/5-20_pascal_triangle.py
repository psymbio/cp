def pascal(rows):
    if rows == 0:
        return []
    result = []
    if rows >= 1:
        result = [[1]]
        if rows == 1:
            return result
    if rows >= 2:
        result = [[1], [1, 1]]
        if rows == 2:
            return result
    for row in range(2, rows):
        to_append = []
        for block in range(0, row):
            if (block == 0) or (block == row - 1):
                to_append.append(1)
            else:
                to_append.append(result[row - 1][block - 1] + result[row - 1][block])
        result.append(to_append)
    print(result)

pascal(15)
