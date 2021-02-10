def __init__(self):
    self.h = {}

def put(self, key, val):
    self.h[key] = val

def get(self, key):
    if key in self.h.keys():
        return self.h[key]
    else:
        return -1

def remove(self, key):
    if key in self.h.keys():
        del self.h[key]
    else:
        return None
