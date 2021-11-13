/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <typeinfo>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        // simple way: travese list store vals in arr and then check palindrome
        string list_items;
        while(head != nullptr) {
            // remember to convert int to string
            list_items += to_string(head->val);
            head = head->next;
        }
        cout << list_items;
        int left = 0, right = list_items.size() - 1;
        while(left < right) {
            if(list_items[left] != list_items[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
