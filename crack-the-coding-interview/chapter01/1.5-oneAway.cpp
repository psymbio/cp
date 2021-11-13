#include <iostream>
#include <unordered_map>
#include <algorithm>

// check freq is same with array
bool oneAway(std::string parent_string, std::string child_string) {
    if(child_string == parent_string) return true;
    if(parent_string.size() < child_string.size()) {
      std::swap(parent_string, child_string);
    }
    if(parent_string.size() - child_string.size() > 1) return false;
    // std::cout << parent_string;
    int isOne = 0;
    for(int i = 0; i <= child_string.size(); i++) {
      if(parent_string[i] != child_string[i]) {
        std::cout << "parent: " << parent_string[i] << " child: " << child_string[i] << std::endl;
        isOne += 1;
        if(isOne > 1) {
          std::cout << "reached here, ";
          return false;
        }
      }
    }
    return true;
}

int main(int argc, char *argv[]) {
    std::cout << oneAway("bake", "potato") << std::endl;
    std::cout << oneAway("potato", "bake") << std::endl;
    std::cout << oneAway("bake", "pale") << std::endl;
    std::cout << oneAway("pale", "ple") << std::endl;
    std::cout << oneAway("pales", "pale") << std::endl;
    std::cout << oneAway("pales", "bale") << std::endl;
    std::cout << oneAway("kales", "bale") << std::endl;
    std::cout << oneAway("bale", "bale") << std::endl;
    return 0;
}
