def solve(self, ops):
    stack = []
    for i in ops:
        if i.isnumeric() == True:
            stack.append(int(i))
        elif i == 'POP':
            if len(stack) >= 1:
                stack = stack[:-1]
            else:
                return -1
        elif i == 'DUP':
            if len(stack) >= 1:
                stack.append(stack[-1])
            else:
                return -1
        elif i == '+':
            if len(stack) >= 2:
                x = stack.pop(-1)
                y = stack.pop(-1)
                stack.append(x + y)
            else:
                return -1
        elif i == '-':
            if len(stack) >= 2:
                x = stack.pop(-1)
                y = stack.pop(-1)
                stack.append(x - y)
            else:
                return -1
    return stack[-1]
