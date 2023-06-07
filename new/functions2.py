import random
import math

count = 0
grid = []
newGrid = []
tempList = []

while count < 10:
    myList = [a for a in range(random.randint(1,1000000)) ]
    MuList = random.choices(myList, k = 10)
    grid.append(MuList)
    count += 1

for group in grid:
    for item in group:
        print(f'{item}\t', end = " ")
    print("\n")


for group in grid:
    for item in group:
        item = round(math.log(item),1)
        print(f'{item}\t', end = " ")
        tempList.append(item)
    newGrid.append(tempList)
    print("\n")