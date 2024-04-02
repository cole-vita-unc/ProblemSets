# Given an integer array nums, return true if any value appears at least twice in the array, 
# and return false if every element is distinct.

 

# Example 1:

# Input: nums = [1,2,3,1]
# Output: true
# Example 2:

# Input: nums = [1,2,3,4]
# Output: false
# Example 3:

# Input: nums = [1,1,1,3,3,4,3,2,4,2]
# Output: true

#Iterate through the array while adding numbers seen to a "seen" array
#If number is in "seen" array, there is a duplicate

def contains_duplicate(nums):
    seen = []
    for i in nums:
        if nums[i] in seen: #TOOD: what's the time complexity on this?
            return True
        else:
            seen.add(nums[i])
    return False
