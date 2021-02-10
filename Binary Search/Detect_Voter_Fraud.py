def solve(self, votes):
    t = []
    for i in range(len(votes)):
        t.append(votes[i][1])
    if len(t) == len(set(t)):
        return False
    return True
