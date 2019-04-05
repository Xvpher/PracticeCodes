def countReg(grid):
    i = 0
    j = 0
    n = len(grid)
    region = [[]]
    for i in range(n):
        for j in range(n):
            if grid[i][j]:
                grid[i][j] = 0
                l = [[i,j]]
                l1 = checkAdj(grid,i,j)
                for ii in l1:
                    if(ii != None):
                        l.append(ii)
                if(l != None):
                    region.append(l)
    return region[1:]


def checkAdj(a, i, j):
    l = []
    if(i == 0 and j == 0):
        if(a[i + 1][j]):
            l.append([i + 1, j])
            a[i + 1][j] = 0
        if(a[i][j + 1]):
            l.append([i, j + 1])
            a[i][ j + 1] = 0
    elif(i == 0 and j == (len(a) - 1)):
        if(a[i + 1][j]):
            l.append([i + 1, j])
            a[i + 1][j] = 0
        if(a[i][j - 1]):
            l.append([i, j - 1])
            a[i][j - 1] = 0
    elif(i == (len(a) - 1) and (j == 0)):
        if(a[i][j + 1]):
            l.append([i, j + 1])
            a[i][j + 1] = 0
        if(a[i - 1][j]):
            l.append([i - 1, j])
            a[i - 1][j] = 0
    elif(i == (len(a) - 1) and (j == (len(a) - 1))):
        if(a[i][j - 1]):
            l.append([i, j - 1])
            a[i][j - 1] =0
        if(a[i - 1][j]):
            l.append([i - 1, j])
            a[i - 1][j] =0
    elif(i == 0):
        if(a[i][j - 1]):
            l.append([i, j - 1])
            a[i][j - 1] = 0
        if(a[i][j + 1]):
            l.append([i, j + 1])
            a[i][j + 1]= 0
        if(a[i + 1][j]):
            l.append([i + 1, j])
            a[i + 1][j] = 0
    elif(j == 0):
        if(a[i + 1][j]):
            l.append([i + 1, j])
            a[i + 1][j] = 0
        if(a[i][j + 1]):
            l.append([i, j + 1])
            a[i][j + 1] = 0
        if(a[i - 1][j]):
            l.append([i - 1, j])
            a[i - 1][j] = 0
    elif(j == len(a)  - 1):
        if(a[i + 1][j]):
            l.append([i + 1, j])
            a[i + 1][j] = 0
        if(a[i - 1][j]):
            l.append([i - 1, j])
            a[i - 1][j] = 0
        if(a[i][j - 1]):
            l.append([i, j - 1])
            a[i][j - 1] = 0
    elif(i == len(a) - 1):
        if(a[i - 1][j]):
            l.append([i - 1, j])
            a[i - 1][j] = 0
        if(a[i][j + 1]):
            l.append([i, j + 1])
            a[i][j + 1] = 0
        if(a[i][j - 1]):
            l.append([i, j - 1])
            a[i][j - 1] = 0
    else:
        if(a[i - 1][j]):
            l.append([i - 1, j])
            a[i - 1][j] = 0
        if(a[i][j + 1]):
            l.append([i, j + 1])
            a[i][j + 1] = 0
        if(a[i][j - 1]):
            l.append([i, j - 1])
            a[i][j - 1] = 0
        if(a[i + 1][j]):
            l.append([i + 1, j])
            a[i + 1][j] = 0

    for tt in l:
        if(tt != None):
            l1 = checkAdj(a, tt[0], tt[1])
            for ii in l1:
                if( ii != None):
                    l.append(ii)

    return l

# def checkCorner(grid,i,j):
#     n = len(grid)
#     if(i == 0):
#         return("down")
#     elif(i==n-1):
#         return("up")
#     elif(j==0):
#         return("right")
#     elif(j==n-1):
#         return("left")
#     else:
#         return("good")

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

def countMatches(grid1, grid2):
    # print("asdfda")
    g1 = []
    g2 = []
    for i in range(len(grid1)):
        g1.append([int(x) for x in grid1[i]])
    for i in range(len(grid2)):
        g2.append([int(x) for x in grid2[i]])
    reg1 = countReg(g1)
    reg2 = countReg(g2)
    i = 0
    for region in reg1:
        for reg in reg2:
            if(check_similarity(region, reg)):
                i = i + 1
    return i


def main():
    n1 = int(input())
    grid1 = []
    for i in range(n1):
        grid1.append([int(x) for x in input()])
    # print(grid1)
    n2 = int(input())
    grid2 = []
    for i in range(n2):
        grid2.append([int(x) for x in input()])
    # print(grid2)
    # print(countMatches(grid1, grid2))
    # n1 = 3
    # n2 = 3
    # grid1 = ["111","110","000"]
    # grid2 = ["111","110","000"]
    print (countMatches(grid1, grid2))


if __name__ == '__main__':
    main()
