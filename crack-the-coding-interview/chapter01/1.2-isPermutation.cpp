#include <iostream>
#include <unordered_map>
#include <algorithm>

// check freq is same with array
bool isPermutation(std::string parent_string, std::string child_string) {
    if(parent_string.size() != child_string.size())
        return false;
    int char_freq[128] = {0};
    for(char c: parent_string) {
        char_freq[c - 'A']++;
    }
    for(char c: child_string) {
        char_freq[c - 'A']--;
        if(char_freq[c - 'A'] < 0)
            return false;
    }
    return true;
}

// sort both and should be equal
bool isPermutation2(std::string parent_string, std::string child_string) {
    std::sort(parent_string.begin(), parent_string.end());
    std::sort(child_string.begin(), child_string.end());
    if(parent_string == child_string) return true;
    return false;
}

int main(int argc, char *argv[]) {
    std::cout << isPermutation("catcat", "DOGcatcat") << std::endl;
    std::cout << isPermutation2("catcat", "ctacat") << std::endl;
    return 0;
}