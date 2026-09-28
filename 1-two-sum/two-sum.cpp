class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    map <int, int> mpp;
    for (int i = 0 ; i < nums.size() ; i++){
        int numA = nums[i];
        int rem = target - numA;
        if(mpp.find(rem) != mpp.end()){
            return {mpp[rem] , i};
        }
        mpp[numA] = i;
    }
    return {-1 , -1};
    }
};