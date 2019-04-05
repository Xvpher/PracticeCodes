def missingWords(s,t):
    arr = list()
    for item in s.split():
        if not(item in t):
            arr.append(item)
    return(arr)

def main():
    s = input()
    t = input()
    print(missingWords(s,t))

if __name__ == '__main__':
    main()
