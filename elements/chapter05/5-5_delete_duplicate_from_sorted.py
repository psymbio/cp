def delete_duplicates(A):
    write_index = 1
    for i in range(1, len(A)):
        if A[write_index - 1] != A[i]:
            A[write_index] = A[i]
            write_index += 1
    print(A[:write_index])

A = [1, 2, 2, 3, 3, 3, 4, 4, 5]
delete_duplicates(A)
