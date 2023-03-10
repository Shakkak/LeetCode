class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> array;
        int left = 0,right = numbers.size()-1;
        while (true){
            if (numbers[left]+numbers[right] == target){
                array.push_back(left+1);
                array.push_back(right+1);
                return array;}
            else if (numbers[left]+numbers[right] > target) right--;
            else left++;
        }
    }
};