
# indexVsValue---the ultimate challenge.
# Below are four functions that try to find the largest member of
# a list.  But:
#   exactly one of them returns the largest value in the list
#   exactly one of them returns the index of the largest value in the list
#   two of them are written incorrectly——they confuse values and indexes
# Your job: 
#   (a) figure out which one returns the largest value   
#   (b) figure out which one returns the index of the largest value
#   (c) for the two that are wrong, figure out which line of code is wrong,
#       how you would change it, and then whether it would then return
#       the largest value, or the index of the largest value

def biggest1(nums):

    theAnswer = 0
    for i in range(len(nums)):
        if nums[i] > nums[theAnswer]:
            theAnswer = i

    return theAnswer

def biggest2(nums):

    theAnswer = nums[0]
    for i in range(len(nums)):
        if nums[i] > theAnswer:
            theAnswer = i

    return theAnswer

def biggest3(nums):

    theAnswer = nums[0]
    for i in range(len(nums)):
        if nums[i] > nums[theAnswer]:
            theAnswer = nums[i]

    return theAnswer

def biggest4(nums):

    theAnswer = nums[0]
    for i in range(len(nums)):
        if nums[i] > theAnswer:
            theAnswer = nums[i]

    return theAnswer
