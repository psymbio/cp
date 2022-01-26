def increment(A):
    carry_over = 0
    for i in reversed(range(len(A))):
        if i == len(A) - 1:
            A[i] += 1
            if A[i] >= 10:
                carry_over = A[i] // 10
                A[i] %= 10
                print(carry_over)
        elif (carry_over > 0) and (i != len(A) - 1):
            A[i] += carry_over
            if A[i] >= 10:
                carry_over = A[i] // 10
                A[i] %= 10
            else:
                carry_over = 0
    if carry_over > 0:
        A.insert(0, carry_over)
    print(A)

A = [9, 9, 9]
B = [1, 2, 9]
C = [1, 3, 0]
increment(C)
