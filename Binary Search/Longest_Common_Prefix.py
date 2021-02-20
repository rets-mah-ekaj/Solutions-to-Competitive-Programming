def check(s1, s2):
    r = ''
    n1 = len(s1)
    n2 = len(s2)
    i, j = 0, 0
    while i <= n1 - 1 and j <= n2 - 1:
        if s1[i] != s2[j]:
            break
        r += s1[i]
        i += 1
        j += 1
    return r

def solve(self, words):
    prefix = words[0]
    n = len(words)
    for i in range(1, n):
        prefix = check(prefix, words[i])
    return prefix
