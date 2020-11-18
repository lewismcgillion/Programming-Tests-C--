class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result(indices.size(), '*');
        
        for(int i = 0; i< indices.size();i++){
            result[indices[i]] = s[i];
        }
        return result;
    }
};