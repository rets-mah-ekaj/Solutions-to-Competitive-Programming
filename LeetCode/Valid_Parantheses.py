class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        d = {')' : '(', '}' : '{', ']' : '['}
        for i in s:
            if i in d:
                if len(stack) != 0:
                    top = stack.pop()
                else:
                    top = '#'
                if d[i] != top:
                    return False
            else:
                stack.append(i)

        if len(stack) == 0:
            return True
        return False
