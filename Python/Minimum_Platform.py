def main():
    t = int(input())
    for item in range(t):
        n = int(input())
        a,d = list(), list()
        a = [int (x) for x in input().split()]
        d = [int (x) for x in input().split()]
        a.sort()
        d.sort()
        i,j,c,min = 0,0,0,0
        while(i<n and j<n):
            if(a[i]<d[j]):
                i+=1
                c+=1
                if(c>min):
                    min=c
            else:
                c-=1
                j+=1
        print(min)

if __name__ == '__main__':
    main()
