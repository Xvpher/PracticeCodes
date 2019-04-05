def missingWords(s,t):
    a = s.split()
    b = t.split()
    arr = [None] *len(a)
    i = 0
    j = 0
    for item in a:
        if len(b) == i:
            arr[j] = item
            j=j+1
            continue
        if item == b[i]:
            i+=1
        else:
            arr[j] = item
            j+=1
    # arr = filter(None, arr)
    # return(arr.filter(None))
    return list(filter(None, arr))

def main():
    s = input()
    t = input()
    for i in missingWords(s,t):
        print (i)

if __name__ == '__main__':
    main()
