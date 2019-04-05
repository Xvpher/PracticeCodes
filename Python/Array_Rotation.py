def method_1(arr,d,n):
    a = list()
    b = list()
    a = arr[0:d]
    b = arr[d:]
    b.extend(a)
    return b

def method_2(arr,d,n):
    for i in range(d):
        x = arr.pop(0)
        arr.append(x)
    return arr

def method_3(arr,d,n):
    g = gcd(n,d)
    for i in range(d):
        temp = arr[i]
        for j in range(g):
            arr[g*j+i] = arr[g*(j+1)+i]
        arr[g*(j+1)+i] = temp
    return arr


def gcd(a,b):
    if b==0:
        return a
    else :
        return gcd(b,a%b)


def main():
    arr = [int(x) for x in input().split()]
    d = int(input())
    n = len(arr)
    print(method_1(arr.copy(),d,n))
    print(method_2(arr.copy(),d,n))
    print(method_3(arr,d,n))

if __name__ == '__main__':
    main()
