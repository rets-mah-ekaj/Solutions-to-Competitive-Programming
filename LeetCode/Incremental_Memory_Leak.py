class Solution:
    def memLeak(self, m1: int, m2: int) -> List[int]:
        time = 0
        i = 1
        while True:
            if i <= m1 and m1 >= m2:
                m1 -= i
                time += 1
                i += 1
            elif i <= m2 and m2 > m1:
                m2 -= i
                time += 1
                i += 1
            else:
                break
        return [i, m1, m2]
