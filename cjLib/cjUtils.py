import sys

def _cjTestNumGenerator():
    n = 1
    while(True):
        yield n
        n += 1

_testNum = _cjTestNumGenerator()
def _print(*args):
    newargs = ["Case #{}:".format(next(_testNum))]
    newargs.extend(args)
    print(*newargs)

def _defaultIterator(data):
    for d in data:
        yield [d]

def run(solver, iterator = _defaultIterator):
    sys.stdin.readline() #discard num test cases
    data = sys.stdin.readlines()
    for d in iterator(data):
        _print(solver(d))
