class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>r;
        for(int i=0;i<nums.size()-k+1;i++){
            int t=nums[i];
            int f=0;
            for(int j=1;j<k;j++){
                if(nums[i+j]!=t+j){
                    f++;
                    break;
                }
            }
            if(f==0){
                r.push_back(nums[i+k-1]);
            }
            else{
                r.push_back(-1);
            }
        }
        return r;
    }
};
