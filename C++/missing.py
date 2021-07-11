def find(s, t):
    res = []
    a = s.split()
    b = t.split()
    for i in range(len(a)-1
    ):
        print(i, len(res))
        if(a[i] != b[i-len(res)]):
            res.append(a[i])
    return res

s = input()
t = input()
res = find(s,t)
print(res)
