import string

def pangram(size, word):
    letter_hash = {}
    if size < 26:
        print("NO")
        quit()
    else:
        word = word.lower()
        for letter in word:
            letter_hash[letter] = True

        all_letters = list(string.ascii_lowercase)
        for letter in all_letters:
            if letter not in letter_hash:
                print("NO")
                quit()
        print("YES")

if __name__ == "__main__":
    size = int(input())
    word = input()
    pangram(size, word)
