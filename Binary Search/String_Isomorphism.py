def solve(self, s, t):
    MAX_CHARS = 256
    m = len(s)
    n = len(t)
    if m != n:
        return False
    marked = [False] * MAX_CHARS
    map = [-1] * MAX_CHARS
    for i in range(n):
        if map[ord(s[i])] == -1:
            if marked[ord(t[i])] == True:
                return False
            marked[ord(t[i])] = True
            map[ord(s[i])] = t[i]
        elif map[ord(s[i])] != t[i]:
            return False
    return True
