def minRotate(str):
    dict = {}
    for i in range(len(str)):
        dict[str] = i
        str = str[1:] + str[0]
    min = sorted(dict)[0]
    print(dict[min])

def main():
    str = input()
    minRotate(str)

if __name__ == '__main__':
    main()
