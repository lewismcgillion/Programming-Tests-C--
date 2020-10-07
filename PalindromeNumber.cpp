class Solution {
public:
    bool isPalindrome(int x) {
        //if the input is negative then return false as it end with -
        if(x<0){return false;}
        
        //reversing the number
        int temp = x;
        
        //using a long to prevent overflow
        long reverse_x = temp % 10;
        while( temp /= 10 ) reverse_x = reverse_x * 10 + temp % 10;
        return reverse_x == x;
    }
};