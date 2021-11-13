#include <iostream>
#include <string>

std::string URLify(std::string input_string) {
    std::string output_string = "";
    for(int i = 0; i <= input_string.size()-1; i++) {
        if(input_string[i] == ' ') {
            output_string += "%20";
        } else {
            output_string += input_string[i];
        }
    }
    return output_string;
}

int main(int argc, char *argv[]) {
    std::cout << URLify("Mr John Smith");
    return 0;
}