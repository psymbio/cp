def rev_words(A):
    words = A.split(" ")
    for i, word in enumerate(words):
        words[i] = word[::-1]
    result = " ".join(words)
    print(result)

def rev_words2(A):
    words = A.split(" ")
    words = words[::-1]
    result = " ".join(words)
    print(result)

rev_words2("ram is costly")
