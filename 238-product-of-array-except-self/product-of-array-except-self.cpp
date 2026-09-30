class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();        
        int product = 1;
        int zeroCount = 0;
        for(auto& it : nums){
            if (it != 0){
                product *= it;
            } 
            if(it == 0) zeroCount++;

        }
        if (zeroCount > 1) {
            for(auto& p : nums){
                p = 0;
            }
        } else {
            for (int i = 0; i < n; i++) {
            if (zeroCount == 1) {
                if (nums[i] == 0) nums[i] = product;
                else nums[i] = 0;
            } else {
                nums[i] = product / nums[i];
            }
            }
        }

        

        return nums;
    }
};