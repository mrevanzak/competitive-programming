/*
 * @lc app=leetcode id=49 lang=rust
 *
 * [49] Group Anagrams
 *
 * https://leetcode.com/problems/group-anagrams/description/
 *
 * algorithms
 * Medium (68.47%)
 * Likes:    18895
 * Dislikes: 601
 * Total Accepted:    2.8M
 * Total Submissions: 4.1M
 * Testcase Example:  '["eat","tea","tan","ate","nat","bat"]'
 *
 * Given an array of strings strs, group the anagrams together. You can return
 * the answer in any order.
 *
 * An Anagram is a word or phrase formed by rearranging the letters of a
 * different word or phrase, typically using all the original letters exactly
 * once.
 *
 *
 * Example 1:
 * Input: strs = ["eat","tea","tan","ate","nat","bat"]
 * Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
 * Example 2:
 * Input: strs = [""]
 * Output: [[""]]
 * Example 3:
 * Input: strs = ["a"]
 * Output: [["a"]]
 *
 *
 * Constraints:
 *
 *
 * 1 <= strs.length <= 10^4
 * 0 <= strs[i].length <= 100
 * strs[i] consists of lowercase English letters.
 *
 *
 */

// @lc code=start
use std::collections::HashMap;

impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
        let mut map = HashMap::with_capacity(strs.len()*2);

        strs.iter().for_each(|s| {
            let mut key = s.chars().collect::<Vec<char>>();
            key.sort();
            let key = key.into_iter().collect::<String>();
            map.entry(key).or_insert(Vec::new()).push(s.to_string());
        });

        map.into_values().collect::<Vec<Vec<String>>>()
    }
}
// @lc code=end
