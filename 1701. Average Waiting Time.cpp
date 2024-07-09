class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double a=0;
        double c=customers[0][0]+customers[0][1];
        a+=c-customers[0][0];
        for(int i=1;i<customers.size();i++){
            if(c>customers[i][0]){
                c=c+customers[i][1];
            }
            else{
                c=c=customers[i][0]+customers[i][1];
            }
            a+=c-customers[i][0];
        }
        double r=a/customers.size();
        return r;
    }
};
