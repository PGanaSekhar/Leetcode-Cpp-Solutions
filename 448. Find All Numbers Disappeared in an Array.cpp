class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]=nums[abs(nums[i])-1]*-1;
            }
        }
        vector<int>r;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                r.push_back(i+1);
            }
        }
        return r;
    }
};
