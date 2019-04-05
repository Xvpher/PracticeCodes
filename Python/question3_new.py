def check(a, i, j, l):
    n = len(a)
    if(i==0 and j==0):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i+1,j,l)
            check(a,i,j+1,l)
    elif(i==0 and j==n-1):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i,j-1,l)
            check(a,i+1,j,l)
    if(i==n-1 and j==0):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i-1,j,l)
            check(a,i,j+1,l)
    if(i==n-1 and j==n-1):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i-1,j,l)
            check(a,i,j-1,l)
    if(i==0):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i+1,j,l)
            check(a,i,j+1,l)
            check(a,i,j-1,l)
    if(j==0):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i+1,j,l)
            check(a,i-1,j,l)
            check(a,i,j+1,l)
    if(i==n-1):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i-1,j,l)
            check(a,i,j+1,l)
            check(a,i,j-1,l)
    if(j==n-1):
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i+1,j,l)
            check(a,i-1,j,l)
            check(a,i,j-1,l)
    else:
        if(a[i][j]):
            a[i][j]=0
            l.append([i,j])
            check(a,i+1,j,l)
            check(a,i-1,j,l)
            check(a,i,j-1,l)
            check(a,i,j+1,l)
    return l

def countMatches(grid1,grid2):
    reg1 = []
    reg2 = []
    n1 = len(grid1)
    for i in range(n1):
        for j in range(n1):
            if(grid1[i][j]):
                l = []
                reg1.append(check(grid1,i,j,l))
    n2 = len(grid2)
    for i in range(n1):
        for j in range(n1):
            if(grid2[i][j]):
                l = []
                reg2.append(check(grid2,i,j,l))
    # print("---------",reg1,"-------------")
    # print("---------",len(reg1),"-------------")
    # print("---------",reg2,"-------------")
    # print("---------",len(reg2),"-------------")
    i=0
    for region in reg1:
        for reg in reg2:
            if(check_similarity(region, reg)):
                i = i + 1
    return i

def check_similarity(region, reg):
    check = False
    if(len(region) != len(reg)):
        return False
    i = len(reg)
    for r1 in region:
        checkIn = False
        for r2 in reg:
            if(r1[0] == r2[0] and r1[1] == r2[1]):
                checkIn = True
        if(checkIn):
            i = i - 1
    if(not i):
        return True
    else:
        return False

def main():
    n1 = int(input())
    grid1 = []
    for i in range(n1):
        grid1.append([int(x) for x in input()])
    n2 = int(input())
    grid2 = []
    for i in range(n2):
        grid2.append([int(x) for x in input()])
    print(countMatches(grid1,grid2))


if __name__ == '__main__':
    main()
