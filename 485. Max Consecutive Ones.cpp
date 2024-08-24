class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r=0;
        int t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                t++;
                r=max(r,t);
            }
            else{
                t=0;
            }
        }
        return r;
    }
};
