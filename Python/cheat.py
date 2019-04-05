from itertools import permutations,combinations
from nltk.corpus import wordnet as wn
def main():
    str = input("Enter the words ")
    l = len(str)
    a = list()
    # a = permutations(str)
    for i in range(3,l+1):
        comb = combinations(str,i)
        for x in list(comb):
            s = ''.join(x)
            perm = permutations(s)
            for item in list(perm):
                t = ''.join(item)
                a.append(t)
    for s in a:
        if wn.synsets(s):
            print(s)

if __name__ == '__main__':
    main()
