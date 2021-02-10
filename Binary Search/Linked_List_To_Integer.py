def solve(self, node):
    if node == None:
        return 0
    temp = ''
    while node != None:
        temp += str(node.val)
        node = node.next
    return int(temp, 2)
