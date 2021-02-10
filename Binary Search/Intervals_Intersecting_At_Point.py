def solve(self, intervals, point):
    c = 0
    for i in range(len(intervals)):
        if point in range(intervals[i][0], intervals[i][1] + 1):
            c += 1
    return c
