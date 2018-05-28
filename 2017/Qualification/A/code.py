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

def parser(lines):
    vals = lines[0].split()
    return solver(list(vals[0]), int(vals[1]))

if __name__ == "__main__":
    run(parser)