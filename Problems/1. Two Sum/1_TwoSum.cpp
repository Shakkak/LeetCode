class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mymap = {};
        for (int i = 0; i < nums.size(); i++){
            if (mymap.find(target - nums[i]) == mymap.end()){
                mymap[nums[i]] = i;
            }else{
                return {mymap[target - nums[i]],i};
            }
        }
        return {};
    }
};