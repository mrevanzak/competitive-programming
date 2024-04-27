/*
 * @lc app=leetcode id=242 lang=rust
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (64.46%)
 * Likes:    11907
 * Dislikes: 394
 * Total Accepted:    3.4M
 * Total Submissions: 5.3M
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t, return true if t is an anagram of s, and false
 * otherwise.
 * 
 * An Anagram is a word or phrase formed by rearranging the letters of a
 * different word or phrase, typically using all the original letters exactly
 * once.
 * 
 * 
 * Example 1:
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * Example 2:
 * Input: s = "rat", t = "car"
 * Output: false
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length, t.length <= 5 * 10^4
 * s and t consist of lowercase English letters.
 * 
 * 
 * 
 * Follow up: What if the inputs contain Unicode characters? How would you
 * adapt your solution to such a case?
 * 
 */


// @lc code=start
use std::collections::HashMap;

impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let mut map = HashMap::new();

        s.chars().for_each(|c| {
            *map.entry(c).or_insert(0) += 1;
        });
        t.chars().for_each(|c| {
            *map.entry(c).or_insert(0) -= 1;
        });
        map.values().all(|&v| v == 0)
    }
}
// @lc code=end

