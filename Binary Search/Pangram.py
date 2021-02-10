def solve(self, s):
    s = [i.lower() for i in s if i.isalpha() == True]
    t = set(s)
    if len(t) == 26:
        return True
    return False
