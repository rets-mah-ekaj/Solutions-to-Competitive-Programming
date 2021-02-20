def __init__(self):
    self.k = []
def add(self, val):
    self.k.append(val)

def find(self, val):
    n = len(self.k)
    temp = self.k
    s = set()
    for i in range(n):
        x = val - temp[i]
        if x in s:
            return True
        s.add(temp[i])
    return False
