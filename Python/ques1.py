def beHappy(r,a):
    x = list()
    y = list()
    w = list()
    s = list()
    c=0
    for row in a:
        x.append(row[0])
        y.append(row[1])
        w.append(row[2])
    # print(w)
    for i in range(min(x),max(x)+1):
        for j in range(min(y),max(y)+1):
            for k in range(len(a)):
                dist = 1+((x[i]-x[j])**2+(y[i]-y[j])**2)**0.5
                if(dist < r):
                    c=c+(w[j]/dist)
            s.append(c)
            c=0
        maxi = s.index(max(s))
    return(a[maxi][0], a[maxi][1])


def main():
    r = int(input())
    arr = []
    rows = int(input())
    col = int(input())
    for _ in range(rows):
        arr.append([int(x) for x in input().split() ])
    res = beHappy(r,arr)
    print(res)

if __name__ == '__main__':
    main()
