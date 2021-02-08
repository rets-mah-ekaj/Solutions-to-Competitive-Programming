def __init__(self):
    self.c = {}

def add(self, val):
    if val not in self.c:
        self.c[val] = 1

def exists(self, val):
    return val in self.c

def remove(self, val):
    if val in self.c:
        self.c.pop(val)
