class Solution {
public:
    //translating from roman numeral to number
    int translate(char c){
        switch(c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    
    int romanToInt(string s) {
        int count = 0;
        int preNum = 0;
        int currentNum = 0;
        
        //iterating through the string
        for(int i = 0;i<s.length();i++){
            currentNum = translate(s[i]);
            
            if(i+1<s.length()){
                //translating the next number
                int nextNum = translate(s[i+1]);
                
                //if current num is bigger than next number add it to count (e.g VI, 5+1)
                if(currentNum>=nextNum){
                    count+=currentNum;
                }
                //otherwise add the next number minus the current num (e.g IV, 5-1)
                else{
                    count+=nextNum-currentNum;
                    //skip the next number
                    i++;
                }
            }
            else{
                count+=currentNum;
            }
        }
        
        return count;
    }
};