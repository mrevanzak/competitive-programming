/*
 * @lc app=leetcode id=15 lang=rust
 *
 * [15] 3Sum
 */

// @lc code=start
impl Solution {
    pub fn three_sum(mut nums: Vec<i32>) -> Vec<Vec<i32>> {
        let mut res = vec![];
        nums.sort();

        for i in 0..nums.len() {
            if i > 0 && nums[i] == nums[i - 1] {
                continue;
            }

            let mut l = i + 1;
            let mut r = nums.len() - 1;

            while l < r {
                let sum = nums[i] + nums[l] + nums[r];
                if sum > 0 {
                    r -= 1;
                } else if sum < 0 {
                    l += 1;
                } else {
                    res.push(vec![nums[i], nums[l], nums[r]]);
                    l += 1;

                    while l < r && nums[l] == nums[l - 1] {
                        l += 1;
                    }
                }
            }
        }
        return res;
    }
}
// @lc code=end

