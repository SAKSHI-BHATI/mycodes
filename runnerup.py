if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    max =float('-inf')# -infinity can not iuse it in int
    ru= float('-inf')
    for i in arr:
        if max < i:
            ru =max
            max = i
        elif i > ru and i != max :
            ru =i
    print (ru)