/// week03-2b.cpp  璶糶2Ω(ぃ璶痷 nums[i] 璶+1,-1,0))
/// LeetCode 厩策璸礶8肈 1822. Sign of the Product of an Array
/// р皚癬ㄓ, 琌タ计, 璽计, 临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; /// 0ヴ计, 常穦跑Θ0, Τ1程, 或跑ぐ或
        for(int i=0; i<nums.size(); i++){ ///Τ碭计, 癹伴禲ㄢΩ
            if(nums[i]>0) ans *=+1;
            if(nums[i]<0) ans *=-1;
            if(nums[i]==0) ans *=0;
            ///ans *=nums[i]; // –Ωрnums [i] 秈ans 柑
        } ///计禫禫, 1000计, , , 碞脄, ┮祘Α絏岿
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
