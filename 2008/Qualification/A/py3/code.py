import fileinput

def discard_names_as_useless(inFile, S):
    for i in range(0,S):
        next(inFile)

def solve(inFile):
    #discard list of possible values
    S = int(next(inFile))
    discard_names_as_useless(inFile, S)

    count = 0
    Q = int(next(inFile))
    queue = set()
    #iterate over queries, adding each one to a set until the set contains all
    #S possible queries. Then increment count and reset set to only include
    #the newest query since we had to have cleared the queue before it arrived
    while Q > 0 :
        Q -= 1
        temp = next(inFile)
        queue.add(temp)
        if len(queue) == S:
            queue = set([temp])
            count += 1
    return count

if __name__ == "__main__":
    inFile = fileinput.input()
    T = int(next(inFile))
    for i in range(1,T+1):
        print("Case #%d: %d" % (i, solve(inFile)))