class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res = "";

        for(string word : words) {
            int x = 0;

            for(char c : word) {
                x += weights[(c - 'a')];
            }

            x %= 26;
            res.push_back('z' - x);
        }

        return res;
    }
};