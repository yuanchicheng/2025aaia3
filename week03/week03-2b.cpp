/// week03-2b.cpp �G�X�@ �n�g2��(���n�u���� nums[i] �u�n+1,-1,0))
/// LeetCode �ǲ߭p�e�a8�D 1822. Sign of the Product of an Array
/// ��}�C���_��, �ݬO����, �t��, �٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; /// �]��0�������, ���|�ܦ�0, �u��1�̨�, ���ƻ��ܤ���
        for(int i=0; i<nums.size(); i++){ ///�ݦ��X�Ӽ�, �j��]�⦸
            if(nums[i]>0) ans *=+1;
            if(nums[i]<0) ans *=-1;
            if(nums[i]==0) ans *=0;
            ///ans *=nums[i]; // �C����nums [i] ���ians ��
        } ///�Ʀr�V���V�j, 1000�ӼƦr, ����@�b, ����@�b, �N�z���F, �ҥH�{���X���F
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
