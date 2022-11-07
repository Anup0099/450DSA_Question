class TwoSum:
    def __init__(self, list1, targets):
        self.list1 = list1
        self.targets = targets

    def twoSum(self):
        for i in range(len(self.list1)):
            for j in range(i + 1, len(self.list1)):
                if self.list1[i] + self.list1[j] == self.targets:
                    return [i, j]


list1 = [2, 7, 11, 15]
targets = 9
obj = TwoSum(list1, targets)
print(obj.twoSum())

def twoSumss(nums,target):
    visited_nums=dict()
    
    for index,num in enumerate(nums):
        nums_to_searched=target-num
        
        if nums_to_searched in visited_nums:
            return [visited_nums[nums_to_searched],index]
        else:
            visited_nums[num]=index
            

        