def caeser_cipher(string, key):
    new_string = ""
    for char in string:
        if char.isupper():
            new_string += chr(((ord(char) + key - 65) % 26 + 65))
        else:
            new_string += chr(((ord(char) + key - 97) % 26 + 97))
    return new_string

print(caeser_cipher("abcxyzABCXYZ", 2))
