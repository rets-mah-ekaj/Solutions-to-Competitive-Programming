def solve(self, rect0, rect1):
    if rect0[0] == rect0[2] or rect0[1] == rect0[3] or rect1[0] == rect1[2] or rect1[1] == rect1[3]:
        return False
    return not(rect0[2] <= rect1[0] or rect0[3] <= rect1[1] or rect0[0] >= rect1[2] or rect0[1] >= rect1[3])
