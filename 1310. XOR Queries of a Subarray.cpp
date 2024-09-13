class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>r;
        for(int i=0;i<queries.size();i++){
            int s=queries[i][0];
            int f=queries[i][1]+1;
            int t=arr[s];
            for(int j=s+1;j<f;j++){
                t=t^arr[j];
            }
            r.push_back(t);
        }
        return r;
    }
};
