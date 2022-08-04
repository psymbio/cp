# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        s = ""
        while head and head.next:
            s += str(head.val)
            head = head.next
        s += str(head.val)
        if s == s[::-1]:
            return True
        return False

# TODO: Follow up: Could you do it in O(n) time and O(1) space?
