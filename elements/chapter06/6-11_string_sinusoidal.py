def sinus(A):
    a_list = list(A)
    # print(a_list)
    j = 0
    level_1 = ""
    level_2 = ""
    level_3 = "\t"
    for j, val in enumerate(a_list):
        if j % 4 == 0 or j % 4 == 2:
            level_2 += val + "\t"
        elif j % 4 == 1:
            level_1 +=  "\t" + val
        elif j % 4 == 3:
            level_3 += "\t" + val
    print(level_1, "\n", level_2, "\n", level_3)
sinus("Hello World!")
