def solve(self, words):
    for i in range(len(words)):
        if i == 0:
            words[i] = words[i].lower()
        else:
            words[i] = words[i][0].upper() + words[i][1:].lower()
    return ''.join(words)
