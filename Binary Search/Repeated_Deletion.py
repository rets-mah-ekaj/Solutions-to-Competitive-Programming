def solve(self, s):
    stack, i, n = [], 0, len(s)
    while i < n:
        if len(stack) and stack[-1] == s[i]:
            x = stack.pop()
            while i < n and x == s[i]:
                i += 1
            i -= 1
        else:
            stack.append(s[i])
        i += 1
    return ''.join(stack)
