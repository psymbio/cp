#include <iostream>
#include <string>

std::string shift_right(std::string in_word, int shift_by) {
    // circular shift right
    std::string out_word = in_word.substr(shift_by, in_word.size());
    out_word += in_word.substr(0, shift_by);
    return out_word;
}

std::string shift_left(std::string in_word, int shift_by) {
    // circular shift left
    std::string out_word = in_word.substr(in_word.size()-shift_by, in_word.size());
    out_word += in_word.substr(0, in_word.size()-shift_by);
    return out_word;
}

bool stringRotation(std::string parent_string, std::string child_string) {
    std::string parent_string_long = parent_string + parent_string;
    if(parent_string_long.find(child_string) == std::string::npos)
        return false;
    return true;
}

int main(int argc, char *argv[]) {
    std::string input_string = "abcde";
    std::cout << stringRotation(input_string, shift_left(input_string, 3)) << std::endl;
    std::cout << stringRotation(input_string, "bac") << std::endl;
    return 0;
}
