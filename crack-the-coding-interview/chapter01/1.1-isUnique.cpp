#include <iostream>
#include <string>
#include <algorithm>
#include <bitset>
#include <unordered_map>

// check if all characters unique
// without additional data structs

bool isUnique(std::string input_string) {
    if (input_string.size() > 128) return false;
    // O(n log n)
    sort(input_string.begin(), input_string.end());

    // O(n) loops for n/2
    // sliding window of pairs

    // could argue that this is O(1) because 128 is fixed
    // which is allowed characters
    for(int i = 0; i < input_string.size()-1; i += 2) {
        std::cout << input_string[i] << input_string[i+1] << std::endl;
        if(input_string[i] == input_string[i+1])
            return false;
    }
    return true;
}

// using additional data structure
bool isUnique2(std::string input_string) {
   std::unordered_map<char, int> char_freq;
   for(int i = 0; i <= input_string.size()-1; i++) {
       if(char_freq.find(input_string[i]) == char_freq.end()) {
           char_freq.insert(std::make_pair(input_string[i], 1));
       } else {
           return false;
       }
   }
   return true;
}

int main(int argc, char *argv[]) {
    std::cout << isUnique("dddabhijk");
    std::cout << isUnique2("dddabhijk");
}

// other solution

// 1. create hashmap of freq if freq of one element increases then
// 2. create a set and check if sizes are same

// book solutions
/*
bool isUnique(std::string input_string) {
    if (input_string.size() > 128) return false;
    bool char_set[128]{};
    for(int i = 0; i < input_string.size()-1; i ++) {
        if(char_set[input_string[i] - 'a'])
            return false;
        char_set[input_string[i] - 'a'] = true;
    }
    return true;
}
*/

/*
bool isUniqueChars_bitvector(const string &str) {
	//Reduce space usage by a factor of 8 using bitvector. 
	//Each boolean otherwise occupies a size of 8 bits.
	bitset<256> bits(0);
	for(int i = 0; i < str.length(); i++) {
		int val = str[i];
		if(bits.test(val) > 0) {
			return false;
		}
		bits.set(val);
	}
	return true;
}
*/