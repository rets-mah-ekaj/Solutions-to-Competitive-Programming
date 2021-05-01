class Solution:
    def tree2str(self, t: TreeNode) -> str:
        ans = ''
        if not t:
            return ans
        stack = [t]
        ans += str(t.val)
        if not t.left and not t.right:
            return ans
        elif not t.left and t.right:
            ans += '()' + '(' + self.tree2str(t.right) + ')'
        elif t.left and not t.right:
            ans += '(' + self.tree2str(t.left) + ')'
        else:
            ans += '(' + self.tree2str(t.left) + ')' + '(' + self.tree2str(t.right) + ')'
        return ans
