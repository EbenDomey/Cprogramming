
nums = [1,2,3,4,5,4,7,8,9,5,1,3,6,4,2,8,9,7,1,3]
numDict = {}
count = 0

for num in nums:
    count = nums.count(num)
    numDict[num] = count
print(numDict)