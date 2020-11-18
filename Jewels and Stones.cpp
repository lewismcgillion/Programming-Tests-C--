class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> jewel;
        int count = 0;
        
        for(int i = 0;i<J.length();i++){
            if(jewel.find(J[i]) == jewel.end()){
                jewel.insert(J[i]);
            }
        }
        
        for(int i = 0; i<S.length();i++){
            if(jewel.find(S[i]) != jewel.end()){
                count ++;
            }
        }
        
        return count;
    }
};