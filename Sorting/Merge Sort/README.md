<h1>Meage 2 Sorted Array</h1>

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
<br>
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
<br>
The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
<br>


<h3>Example 1:</h3>

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3 <br>
Output: [1,2,2,3,5,6]<br>
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].<br>
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
<br >

<h3>Example 2:</h3>

Input: nums1 = [1], m = 1, nums2 = [], n = 0<br>
Output: [1]<br>
Explanation: The arrays we are merging are [1] and [].<br>
The result of the merge is [1].<br>

<h3>Example 3:</h3>

Input: nums1 = [0], m = 0, nums2 = [1], n = 1<br>
Output: [1]<br>
Explanation: The arrays we are merging are [] and [1].<br>
The result of the merge is [1].<br>
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.<br>

<h3>Constraints:</h3>

nums1.length == m + n<br>
nums2.length == n<br>
0 <= m, n <= 200<br>
1 <= m + n <= 200<br>
-109 <= nums1[i], nums2[j] <= 109<br>


<hr>
<h3>LeetCode Problem No. 88</h3>
http://leetcode.com/problems/merge-sorted-array/description/
