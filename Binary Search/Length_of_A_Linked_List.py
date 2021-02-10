def solve(self, node):
    if node == None:
        return 0
    count = 0
    while node.next != None:
        node = node.next
        count += 1
    return count + 1
