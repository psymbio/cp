# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def helper_bfs(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root == None:
            return
        queue = [root]
        result = []
        direction = 1
        while len(queue) > 0:
            level = []
            for i in range(len(queue)):
                to_explore = queue.pop(0)
                level.append(to_explore.val)
                if to_explore.left:
                    queue.append(to_explore.left)
                if to_explore.right:
                    queue.append(to_explore.right)
            result.append(level[::direction])
            direction *= -1
        return result
                
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        level_order = self.helper_bfs(root)
        return level_order