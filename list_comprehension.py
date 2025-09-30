if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    l1 = [ i for i in range(x+1) ]
    l2 = [j for j in range(y+1)]
    l3 = [k for k in range(z+1)]
    cross_product = [[i, j,k] for i in range(x+1) for j in range(y+1) for k in range(z+1) if i + j + k != n]

    print( cross_product)