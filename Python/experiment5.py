import pandas as pd
import numpy as np
from matplotlib import pyplot as plt

def main():
    df = pd.DataFrame()
    for item in range(5):
        m = np.array([int(i) for i in raw_input().split()])
        df[item] = m
    df.columns = ['Virat Kohli','Rohit Sharma','Joe Root','Kane Williamson','Babar Azam']
    print df
    for item in df.columns:
        cv = (np.std(df[item])/np.mean(df[item]))*100
        print "For {} The Coefficient of Variation is {}".format(item,cv)
        # print np.var(df[item])


if __name__ == '__main__':
    main()
