N = 8
def isSafe(x,y,sol[N][N]):
    if(x>=0 and x<N and y>=0 and y<N and sol[x][y] == -1):
        return 1

def printSolution(sol[N][N]):
    for x in range N:
        for y in range N:
            print("{0:2d}".format(sol[N][N]))
        print("\n")

def solveKT():
                        
