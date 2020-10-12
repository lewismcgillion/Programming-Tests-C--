class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //iterate through vector and add previous number to current number
        for(int i = 1; i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};