class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1){
            return true;
        }
        int r=0;
        for(int i=0;i<nums.size() && i<=r;i++){
            r=max(r,i+nums[i]);
            if(r>=nums.size()-1){
                return true;
            }
        }
        return false;
    }
};
