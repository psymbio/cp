def rep_rem(A):
    if not A:
        return
    for i, char in enumerate(A):
        if char == 'a':
            A[i] = 'd'
            A.insert(i+1, 'd')
    print(A)

    write_index = 1
    for i in range(1, len(A)):
        if A[i] != 'b':
            A[write_index] = A[i]
            write_index += 1

    print(A[:write_index])

rep_rem(['a', 'c', 'd', 'b', 'b', 'c', 'a'])
