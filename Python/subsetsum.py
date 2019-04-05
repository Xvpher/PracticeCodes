def subsum(arr):
    n = len(arr)
    s=0
    for i in range(1,n+1):
        for j in range(n-i+1):
            for k in range(j,j+i):
                print(arr[k], end = " ")
                s+=arr[k]
            print()
    return(s)


def main():
    n = int(input())
    arr = [int(x) for x in input().split()]
    print(subsum(arr))



if __name__ == '__main__':
    main()
