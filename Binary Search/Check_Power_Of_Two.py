def solve(self, n):
    if bin(n)[2:].count('1') == 1:
        return True
    return False
