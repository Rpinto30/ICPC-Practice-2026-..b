grid = []
dx, dy, k = list(map(int, input().split()))

for l in range(int(k)):
    entry = list(map(int, input().split()))
    wx,wy,d = entry[:3]
    pairs = entry[3:]
    
    for p in range(len(pairs)//2):
        pass


for i in range(int(dy)): 
    l = []
    for j in range(int(dx)):
        l.append('.')
    grid.append(l)

# ------- PRINT GRID ------
for line in grid:
    [print(i, end="") for i in line]
    print()