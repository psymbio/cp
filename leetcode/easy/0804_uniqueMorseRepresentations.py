class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        morse_letters = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        list_of_morse_words = []
        for word in words:
            word_in_ascii = ""
            for letter in word:
                word_in_ascii += morse_letters[ord(letter)-97]
            list_of_morse_words += [word_in_ascii]
        # print(len(set(list_of_morse_words)))
        return len(set(list_of_morse_words))
