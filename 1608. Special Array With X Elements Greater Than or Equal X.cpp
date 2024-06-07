class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++){
            int t=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i){
                    t++;
                    if(t>=i+1){
                        break;
                    }
                }
            }
            if(t==i){
                return i;
            }
        }
        return -1;
    }
};
