def solve(self, head):
    if head == None:
        return True
    else:
        while head.next != None:
            if head.val >= head.next.val:
                return False;
            head = head.next;
        return True;
