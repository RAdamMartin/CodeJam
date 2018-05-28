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

def run(solver, iterator):
    sys.stdin.readline() #discard num test cases
    data = sys.stdin.readlines()
    for d in iterator(data):
        _print(solver(d))

def iterator(data):
    for d in data:
        yield d.split()

def solver(vals):
    max_damage = int(vals[0])
    cur_power = 1
    powers = []
    cur_damage = 0
    for action in vals[1]:
        if action == 'C':
            cur_power *= 2
        else: #action == 'S'
            cur_damage += cur_power
        powers.append(cur_power)

    swaps = 0
    while (cur_damage > max_damage):
        changed = False
        for idx in range(len(vals[1])-1, 0, -1):
            if vals[1][idx-1:idx+1] == 'CS':
                powers[idx-1] /= 2
                cur_damage -= powers[idx-1]
                vals[1] = vals[1][:idx-1] + 'SC' + vals[1][idx+1:]
                changed = True
                swaps += 1
                break
        if not changed:
            break

    return 'IMPOSSIBLE' if cur_damage > max_damage else swaps

run(solver, iterator)  