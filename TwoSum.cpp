class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> finalNums;
        
        //iterating through nums vector
        for(int i = 0; i< nums.size();i++){
            //setting the current number
            int currentNum = nums[i];
            
            //iterating through the vector again
            for(int j = 0; j<nums.size();j++){
                //if the numbers add up to the target
                if(nums[j] + currentNum == target && j!=i){
                    //add result to vector and return
                    finalNums.push_back(i);
                    finalNums.push_back(j);        
                    return finalNums;
                }
            }
        }
        return finalNums;
    }
};