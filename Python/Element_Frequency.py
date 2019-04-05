def Frequency(arr):
    dict = {}
    for num in arr:
        if num in dict.keys():
            dict[num] += 1
        else :
            dict[num] = 1
    return(len(dict.keys()))
    pass

def main():
    arr = list()
    arr = [int(x) for x in input().split()]
    print(Frequency(arr))
    pass

if __name__ == '__main__':
    main()
