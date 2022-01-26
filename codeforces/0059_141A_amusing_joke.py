def amusing_joke(a, b, c):
    a_b = sorted(a + b)
    c = sorted(c)
    if a_b == c:
        print("YES")
    else:
        print("NO")

a = input()
b = input()
c = input()

amusing_joke(a, b, c)
