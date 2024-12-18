class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>r;
        for(int i=0;i<prices.size();i++){
            int f=0;
            for(int j=i+1;j<prices.size();j++){
                if (prices[i]>=prices[j]){
                    r.push_back(prices[i]-prices[j]);
                    f++;
                    break;
                }
            }
            if(f==0){
                r.push_back(prices[i]);
            }
        }
        return r;
    }
};
