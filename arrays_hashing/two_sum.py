# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

# Example 1:

# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
# Example 2:

# Input: nums = [3,2,4], target = 6
# Output: [1,2]
# Example 3:

# Input: nums = [3,3], target = 6
# Output: [0,1]



# Brute force would be a double loop that searches for adding up to the target 
# But we can parse the array in the middle and check if the added numbers are less than / greater than target 

def two_sum(nums,target):

    length = nums.length
    middle = length / 2

    for i in nums:
        addition = nums[i] + nums[middle]
        # If greater, search first half of array 
        if addition > target:
            middle = int(middle/2)
        # If less, search second half of array
        if addition < target:
            middle = (length + middle) / 2
        # Equals target 
        



    [1,2,3,4,5]