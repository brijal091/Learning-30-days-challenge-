# Here user will enter the target and we have to find it's index in the list. If the number do not exist then we will return the last index.

nums = [1,3,5,6]
tagrget = 4
if tagrget in nums:
    print(nums.index(tagrget))
else:
    for i in range(len(nums)):
        if nums[i] > tagrget:
            print (i)
            break
        elif nums[i] == nums[-1]:
            print (len(nums))

#  Here note that use return insted of print.       