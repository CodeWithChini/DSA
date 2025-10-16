<h1>Search in Rotated Sorted Array</h1>

There is an integer array nums sorted in ascending order (with distinct values).<br>

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].<br>

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.<br>

You must write an algorithm with O(log n) runtime complexity.<br>



<h3>Example 1:</h3>

Input: nums = [4,5,6,7,0,1,2], target = 0<br>
Output: 4<br>

<h3>Example 2:</h3>

Input: nums = [4,5,6,7,0,1,2], target = 3<br>
Output: -1<br>

<h3>Example 3:</h3>

Input: nums = [1], target = 0<br>
Output: -1<br>


<h3>Constraints:</h3>

1 <= nums.length <= 5000<br>
-104 <= nums[i] <= 104<br>
All values of nums are unique.<br>
nums is an ascending array that is possibly rotated.<br>
-104 <= target <= 104<br>

<hr>
<h3>LeetCode Problem No. 33</h3>
https://leetcode.com/problems/search-in-rotated-sorted-array/description/
