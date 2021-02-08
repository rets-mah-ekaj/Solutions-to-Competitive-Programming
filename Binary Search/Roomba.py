def solve(self, moves, x, y):
    a, b = 0, 0
    for i in moves:
        if i == 'NORTH':
            a += 1
        elif i == 'SOUTH':
            a -= 1
        elif i == 'EAST':
            b += 1
        else:
            b -= 1
    if a == y and b == x:
        return True
    return False
