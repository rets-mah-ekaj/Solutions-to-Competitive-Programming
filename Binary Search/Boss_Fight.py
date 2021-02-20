def solve(self, fighters, bosses):
    fcount = sum(fighters)
    winners = []
    for i in bosses:
        if fcount <= sum(i):
            winners.append(i)
    return winners
