def solve(self, node, target):
    temp = node
    prev = None
    while temp != None and temp.val == target:
        node = temp.next
        temp = node
    while temp != None:
        while temp != None and temp.val != target:
            prev = temp
            temp = temp.next
        if temp == None:
            return node
        prev.next = temp.next
        temp = prev.next
    return node
