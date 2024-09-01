class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> r;
        if(m*n!=original.size()){
            return r;
        }
        int a=0;
        for(int i=0;i<m;i++){
            vector<int> t;
            for(int j=0;j<n;j++){
                t.push_back(original[a]);
                a++;
            }
            r.push_back(t);
        }
        return r;
    }
};
