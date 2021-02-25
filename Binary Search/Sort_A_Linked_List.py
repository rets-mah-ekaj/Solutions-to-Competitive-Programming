import collections # to be typed at the top
def solve(self, node):
    values, head = [], node
    while node:
        values.append(node.val)
        node = node.next
    values.sort()
    values = collections.deque(values)
    node = head
    while node:
        node.val = values.popleft()
        node = node.next
    return head
