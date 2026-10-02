class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        int n = words.size();

        unordered_map<string, int> umap;

        for(string& w : words) {
            if(w.size() < k) {
                continue;
            }

            string pre = w.substr(0, k);
            umap[pre]++;
        }

        
        int ans = 0;

        for(auto& p : umap) {
            if(p.second >= 2) ans++;
        }

        return ans;
    }
};