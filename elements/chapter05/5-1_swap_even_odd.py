def even_odd(elements):
    next_even, next_odd = 0, len(elements) - 1
    while next_even < next_odd:
        if elements[next_even] % 2 == 0:
            # keep the evens in the start
            next_even += 1
        else:
            # swap
            elements[next_even], elements[next_odd] = elements[next_odd], elements[next_even]
            next_odd -= 1
    return elements

if __name__ == "__main__":
    elements = list(range(1, 20))
    elements_even_odd = even_odd(elements)
    print(elements_even_odd)
