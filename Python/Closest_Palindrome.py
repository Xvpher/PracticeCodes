def main():
    t = int(input())
    while(t):
        a = input()
        n = int(len(a))
        m = int(n/2)
        revlist = list()
        diff = list()
        b = a[:m:]
        if n%2 == 0:
            for i in range(3):
                c = int(b)+i-1
                rev = str(c) + str(c)[::-1]
                revlist.append(rev)
        else :
            for i in range(3):
                c = int(a[m])+i-1
                rev = b+str(c)+b[::-1]
                revlist.append(rev)
        # print(revlist)
        for rev in revlist:
            diff.append(int(rev)-int(a))
        # print(diff)
        if(abs(diff[0])<abs(diff[1])):
            min = diff[0]
        else :
            min = diff[1]
        if(abs(diff[2])<abs(min)):
            min = diff[2]
        print(int(a)+min)
        # print(min)
        t = t-1

if __name__ == '__main__':
    main()
