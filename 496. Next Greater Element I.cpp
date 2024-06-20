class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>r;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;i<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int f=-1;
                    for(int k=j;k<nums2.size();k++){
                        if(nums2[j]<nums2[k]){
                            f=nums2[k];
                            break;
                        }
                    }
                    r.push_back(f);
                    break;
                }
            }
        }
        return r;
    }
};
