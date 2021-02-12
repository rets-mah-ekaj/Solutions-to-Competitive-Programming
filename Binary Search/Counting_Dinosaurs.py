def solve(self, animals, dinosaurs):
    c = 0
    dinosaurs = ''.join(set([i for i in dinosaurs]))
    for i in dinosaurs:
        c += animals.count(i)
    return c
