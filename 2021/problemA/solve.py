grid = ""
dx, dy, k = list(map(int, input().split()))

for i in range(int(dy)* int(dx)): 
    grid += '.'
    

for l in range(int(k)):
    entry = list(map(int, input().split()))
    wx,wy,d = entry[:3]
    pairs = entry[3:]
    
    for p in range(0, len(pairs)-1, 2):
        index = dx * (pairs[p+1]-1) + pairs[p]-1 # Mi idea es que se recorra como si fuese un cuadrado, dx veces y + x
        grid = grid[:index] + "#" + grid[index+1:]


# ------- PRINT GRID ------
for ran in range(1, len(grid)+1):
    if (ran%dx == 0): 
        print(grid[ran-1])
        continue
    print(grid[ran-1], end='')