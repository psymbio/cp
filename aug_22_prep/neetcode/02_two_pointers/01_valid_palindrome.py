class Solution:
    def isPalindrome(self, s: str) -> bool:
        phrase = ""
        for i in range(0, len(s)):
            if s[i].isalnum():
                phrase += s[i].lower()
        print(phrase)
        return phrase[::-1] == phrase