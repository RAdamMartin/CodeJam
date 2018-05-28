import sys
sys.path.append('../../../cjLib')
from cjUtils import *

def solver(s, k):
    moves = 0
    while len(s) >= k:
        try: #Get the first backwards pancake
            idx = s.index('-')
        except ValueError: #Nothing backwords so done
            return moves
        
        s = s[idx:] #move on as [:idx-1] is good ('+')
        s = ['+' if c == '-' else '-' for c in s[:k]] + s[k:]
        moves += 1
            
    return "IMPOSSIBLE"    

def parser(inputs):
    N = inputs[0]
    placements = inputs[1]
    grid = [x[:] for x in [[''] * N] * N]
    for p in placements:
        i = int(p[1])-1
        j = int(p[2])-1
        grid[i][j] = p[0]
    return grid

def iterator(data):
    idx = 0
    while idx < len(data):
        N, M = tuple(map(int, data[idx].split()))
        idx += 1
        placements = list(map(str.split, data[idx:idx+M]))
        yield [N, placements]
        idx += M

if __name__ == "__main__":
    run(solver=parser, iterator=iterator)