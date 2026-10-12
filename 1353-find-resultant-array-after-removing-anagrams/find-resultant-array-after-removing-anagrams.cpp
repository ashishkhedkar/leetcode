class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;

        for (string s : words) {
            string key = s;
            sort(key.begin(), key.end());

            if (ans.empty()) {
                ans.push_back(s);
            } else {
                string prev = ans.back();
                sort(prev.begin(), prev.end());

                if (key != prev) {
                    ans.push_back(s);
                }
            }
        }

        return ans;
    }
};