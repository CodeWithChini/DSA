<h1>Remove All Occurrences of a Substring</h1>

Given two strings s and part, perform the following operation on s until all occurrences <br> of the substring part are removed:<br>

Find the leftmost occurrence of the substring part and remove it from s.<br>
Return s after removing all occurrences of part.<br>

A substring is a contiguous sequence of characters in a string.<br>

<h3>Example 1:</h3>

Input: s = "daabcbaabcbc", part = "abc"<br>
Output: "dab"<br>
Explanation: The following operations are done:<br>
- s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".<br>
- s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".<br>
- s = "dababc", remove "abc" starting at index 3, so s = "dab".<br>
Now s has no occurrences of "abc".<br>

<h3>Example 2:</h3>

Input: s = "axxxxyyyyb", part = "xy"<br>
Output: "ab"<br>
Explanation: The following operations are done:<br>
- s = "axxxxyyyyb", remove "xy" starting at index 4 so s = "axxxyyyb".<br>
- s = "axxxyyyb", remove "xy" starting at index 3 so s = "axxyyb".<br>
- s = "axxyyb", remove "xy" starting at index 2 so s = "axyb".<br>
- s = "axyb", remove "xy" starting at index 1 so s = "ab".<br>
Now s has no occurrences of "xy".<br>

<h3>Constraints:</h3>

1 <= s.length <= 1000<br>
1 <= part.length <= 1000<br>
s​​​​​​ and part consists of lowercase English letters.<br>


<hr>
<h3>LeetCode Problem No. 1910</h3>
https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
