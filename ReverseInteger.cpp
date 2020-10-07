class Solution {
public:
    int reverse(int x) {
        long reverse = 0;
        int remainder;
        while(x!=0){
            remainder = x%10;
            reverse = reverse * 10 + remainder;
            x/=10;
        }
        if(reverse <= INT_MIN || reverse >= INT_MAX)
        {
            return 0;
        }
        else{
            return reverse;
        }
    }
};