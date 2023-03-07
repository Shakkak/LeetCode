class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int pointer = right;
        vector <int> sorted(nums.size());
        while (left<=right){
            if (abs(nums[right]) >= (abs(nums[left])))
                sorted[pointer--] = nums[right]*nums[right--];
            else sorted[pointer--] = nums[left]*nums[left++];
        }
        return sorted;
    }
};