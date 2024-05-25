class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0;
        int p=0;
        for(int i=0; i<prices.size();i++){
            if(prices[l]<prices[i]){
                int t=prices[i]-prices[l];
                if(t>p){
                    p=t;
                }
            }
            else{
                l=i;
            }
        }
        return p;
    }
};
