class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pointerZ = 0;
        for (int nonezero = 0; nonezero < nums.size();nonezero++){
            if (nums[nonezero] != 0){
                swap(nums[nonezero],nums[pointerZ]);
                pointerZ++;
            }
        }   
    }
};