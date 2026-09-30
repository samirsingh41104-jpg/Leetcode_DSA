class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int product = 1;
        int zeroCount = 0;
        for(auto& it : nums){
            if (it != 0){
                product *= it;
            } 
            if(it == 0) zeroCount++;

        }
        if (zeroCount > 1) {
            return res; 
        }

        for (int i = 0; i < nums.size(); i++) {
            if (zeroCount == 1) {
                if (nums[i] == 0) res[i] = product;
                else res[i] = 0;
            } else {
                res[i] = product / nums[i];
            }
        }

        return res;
    }
};