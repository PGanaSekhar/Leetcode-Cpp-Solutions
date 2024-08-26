class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,r=nums[0];
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            r=max(r,sum);
            if(sum<0){
                sum=0;
            }
        }
        return r;
    }
};
