def solve(self, intervals):
    l = []
    r = []
    for i in range(len(intervals)):
        l.append(intervals[i][0])
        r.append(intervals[i][1])
    l = max(l)
    r = min(r)
    return [l, r]
