import fileinput

def advance_iterable_n(iterable, n):
    while n > 0:
        n -= 1
        next(inFile)

def solve(inFile):
    #discard list of possible values
    numEngines = int(next(inFile))
    advance_iterable_n(inFile, numEngines)

    #iterate over queries, adding each one to a set until the set contains all
    #numEngines possible queries. Then increment count and reset set to only
    #include the newest query since we had to have cleared the queries before
    #it arrived.
    count = 0
    numQueries = int(next(inFile))
    currentBatch = set()
    while numQueries > 0 :
        numQueries -= 1
        temp = next(inFile)
        currentBatch.add(temp)
        if len(currentBatch) == numEngines:
            currentBatch = set([temp])
            count += 1
    return count

if __name__ == "__main__":
    inFile = fileinput.input()
    T = int(next(inFile))
    for i in range(1,T+1):
        print("Case #%d: %d" % (i, solve(inFile)))