def minimum
while(1):
        tmp = None
        for i in range(0, len(a)):
            if a[i] != min(a[i:]) and (tmp is None or a[i] < a[tmp]):
                tmp = i
        if tmp is None:
            return c
        else:
            a.append(a.pop(tmp))
            c += 1