class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<9){
            return word.size();
        }
        int i=1;
        int j=word.size();
        int r=0;
        while(j>0){
            j=j-8;
            if(j>0){
                r=r+(8*i);
            }
            else{
                r=r+(j+8)*i;
            }
            i++;
        }
        return r;
    }
};
