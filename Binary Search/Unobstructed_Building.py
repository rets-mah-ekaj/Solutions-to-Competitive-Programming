def solve(self, heights):
    l = []
    for i in range(len(heights)):
        flag = 0
        for j in range(i + 1, len(heights)):
            if heights[i] <= heights[j]:
                flag = 1
                break
        if flag == 0:
            l.append(i)
    return l
