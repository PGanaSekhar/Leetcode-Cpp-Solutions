class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<t.size();i++){
            if (count(s.begin(),s.end(),t[i])!=count(t.begin(),t.end(),t[i])){
                return t[i];
            }
        }
        return t[t.size()-1];
    }
};
