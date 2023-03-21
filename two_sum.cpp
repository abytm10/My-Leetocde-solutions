class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            cout << "com" << complement << endl;
            auto k = std::find(nums.begin(), nums.end(), complement);
            if( k != nums.end()){
                return { (int)(k-nums.begin()) , i};
            }
        }
        return {}; // should never reach this point

    }
};
