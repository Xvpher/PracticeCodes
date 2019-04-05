import numpy as np
import pandas as pd
from matplotlib import pyplot as plt

def main():
    x = np.array([10*i+5 for i in range(10)])
    f = np.array([int(i) for i in raw_input().split()])
    u = (x - 45)/x.size
    M = list()
    m = np.array([(f*u**(i+1)).sum() for i in range(4)])
    m = m/243.0
    M.append(m[0])
    M.append(m[1]-m[0]**2)
    M.append(m[2]-3*m[1]*m[0]+2*(m[0]**3))
    M.append(m[3]-4*m[2]*m[0]+6*m[1]*m[0]*m[0]-3*(m[0]**4))
    mu = np.array([M[0], (10**2)*M[1], (10**3)*M[2], (10**4)*M[3]])
    skew = ((mu[2]**2)/(mu[1]**3))**0.5
    print "Skewness of the distribution is = {}\n".format(skew*np.sign(mu[2]))
    kurt = (mu[3]/(mu[1]**2))
    print "Kurtosis of the distribution is = {}\n".format(kurt-3)
    plt.bar(x, f, width = 5.0, color = 'red')
    plt.xlabel('Class Nodes')
    plt.ylabel('Frequency')
    d = {'x':x, 'f':f, 'u':u, 'fu':f*u, 'fu2':f*u**2, 'fu3':f*u**3, 'fu4':f*u**4}
    df = pd.DataFrame(data=d, columns=['x','f','u','fu','fu2','fu3','fu4'])
    df.to_html('Output_exp4.html')
    # print df
    plt.show()

if __name__ == '__main__':
    main()
