'''
# Sample code to perform I/O:
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
import pandas as pd
import numpy as np

df = pd.DataFrame(columns=['name','seats','aisle'])

def addScreen(name, rows, cols, aisle):
    dic = {'name':name, 'seats':np.zeros((rows,cols)), 'aisle':(aisle,)}
    df.append(dic)
    print("success")
    return

def reserve(name, row, seat):
    df_1 = df.loc[df['name'] == name]
    mat = df_1['seats']
    for item in seat:
        if(mat[row][item-1] == 1):
            print("failure")
            return
        mat[row][item-1] = 1
    print("success")
    return

def getSeats(name, row):
    df_1 = df.loc[df['name'] == name]
    mat = df_1['seats']
    for pos,item in enumerate(mat[row]):
        if(item ==0):
            print (pos+1+" ",)
    return

def getCont(name, num, row, ch):
    flag1=0
    flag2=0
    df_1 = df.loc[df['name'] == name]
    mat = df_1['seats']
    aisle = df_1['aisle']
    fis = mat[row][ch-num:ch]
    sec = mat[row][ch-1:ch+num-1]
    x = list(set(aisle) & set(list(range([ch-num+1,ch+1]))))
    if(len(x)>2):
        flag1=1
    if(len(x)==2 and abs(x[1]-x[0])==1):
        flag1=1

    x = list(set(aisle) & set(list(range([ch,ch+num]))))
    if(len(x)>2):
        flag2=1
    if(len(x)==2 and abs(x[1]-x[0])==1):
        flag2=1

    if(flag1==1 and flag2==1):
        print("none")
    elif(1 in fis and 1 in sec):
        print("none")
    elif(1 in fis and flag2==1):
        print("none")
    elif(1 in sec and flag1==1):
        print("none")
    elif(1 in fis):
        print(list(range(ch-1,ch+num-1)))
    else:
        print(list(range(ch-num,ch)))
    return

def main():
    test = int(input())
    while(test>0):
        comm = input().split()
        if(comm[0] == "add-screen"):
            addScreen(str(comm[1]), int(comm[2]), int(comm[3]), [int(x) for x in comm[4:]])
        elif(comm[0] == "reserve-seat"):
            reserve(str(comm[1]), int(comm[2]), [int(x) for x in comm[3:]])
        elif(comm[0] == "get-unreserved-seats"):
            getSeats(str(comm[1]), int(comm[2]))
        elif(comm[0] == "suggest-contiguous-seats"):
            getCont(str(comm[1]), int(comm[2]), int(comm[3]), int(comm[4]))
        else:
            print("error")
    test-=1

if __name__=='__main__':
    main()
