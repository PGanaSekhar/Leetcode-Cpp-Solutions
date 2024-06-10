class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>r; 
        for(int i=0;i<numbers.size();i++){
            for(int j=i+1;j<numbers.size();j++){
                if(numbers[i]+numbers[j]==target){
                    r.push_back(i+1);
                    r.push_back(j+1);
                    return r;
                }
            }
        }
        return r;
    }
};
