class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {unordered_map<string,vector<string>> res;for (string s:strs){
        string key=s;
        
        sort(key.begin(),key.end());
         res[key].push_back(s);
        }

    vector<vector<string>> answer;
    for (auto pair:res){answer.push_back(pair.second);}
        return answer;
    }
};
