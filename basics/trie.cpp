#include <iostream>
#include <string>
#include <algorithm>

struct trie {
	struct trie *children[26];
	bool end;
};

struct trie *get_node(void) {
	struct trie *p = new trie;
	p->end = false;
	for (int i = 0; i < 26; i++) {
		p->children[i] = NULL;
	}
	return p;
}

void insert(struct trie *root, std::string s) {
	struct trie *p = root;
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i = 0; i < s.size(); i++) {
		// index of char
		int index = s[i] - 'a';
		std::cout << "index: " << index << "\n";
		if(!p->children[index]) {
			p->children[index] = get_node();
		}
		p = p->children[index];
	}
	p->end = true;
	
	std::cout << "inserted: " << s << "\n";
}

bool search(struct trie *root, std::string s) {
	struct trie *p = root;
	for(int i = 0; i < s.size(); i++) {
		int index = s[i] - 'a';
		if(p->children[index] == NULL) {
			return false;
		}
		p = p->children[index];
	}
	// see if we arrive at the actual end
	// like if we were searching for c
	return p->end && p != NULL;
}
int main(int argc, char const *argv[]) {
	struct trie *root = get_node();
	insert(root, "cats");
	insert(root, "dogs");
	insert(root, "cat");

	// that was pushed to it
	std::cout << "Search for cat: " << search(root, "cat");
	// shorter than the pushed
	std::cout << "\nSearch for dog: " << search(root, "dog");
	// longer than the pushed
	std::cout << "\nSearch for catss: " << search(root, "catss");
	return 0;
}
