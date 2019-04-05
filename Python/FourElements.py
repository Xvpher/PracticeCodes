def main():
    t = int(input())
    for item in range(t):
        n = int(input())
        a = [int(x) for x in input().split()]
        key = int(input())
        # m = int((n-1)/2)
        for i in range(n):
            for j in range(i+1,n):
                m = int((n-1)/2)
                sum = key-a[i]-a[j]
                l=j
                u=n-1

                # print(i,j)


if __name__ == '__main__':
    main()
