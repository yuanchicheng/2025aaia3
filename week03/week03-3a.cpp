/// week03-3a.cpp 二合一的第1種方法 把不是0的找出來
/// LeetCode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; ///用來放不是0的數
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        } /// 上面把不是0的數暫時放在ans裡, 等一下再放回去
        /// 再用for 迴圈放回去
        for(int i=0; i<nums.size(); i++){
            if(i <ans.size()) nums[i] = ans[i]; ///塞回去
            else nums[i] = 0; /// 其他的放0
        }
    }
};
