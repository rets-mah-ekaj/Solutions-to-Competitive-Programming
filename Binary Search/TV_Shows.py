def solve(self, shows, durations, k):
    d = {}
    for i in range(len(shows)):
        if shows[i] not in d:
            d[shows[i]] = durations[i]
        else:
            d[shows[i]] += durations[i]
    temp = 0
    for i in range(k):
        temp += d[max(d, key = d.get)]
        del d[max(d, key = lambda j : d[j])]
    return temp
