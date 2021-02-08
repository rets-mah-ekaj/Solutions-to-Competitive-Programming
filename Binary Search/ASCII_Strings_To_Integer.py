def solve(self, s):
    temp = "0"
    Sum = 0
    for i in s:
        if (i.isdigit()):
            temp += i
        else:
            Sum += int(temp)
            temp = "0"

    return Sum + int(temp)
