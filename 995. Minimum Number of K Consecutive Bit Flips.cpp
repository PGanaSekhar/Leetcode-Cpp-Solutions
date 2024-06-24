class Solution {
public:
    int minKBitFlips(vector<int>& A, int K, int res = 0) {
        for (auto i = 0; i < A.size(); ++i) {
            if (A[i] != 1) {
            if (i + K - 1 >= A.size()) return -1;
            for (auto j = i; j < i + K; ++j) A[j] = !A[j];
            ++res;
            }
        }
        return res;
    }
};
