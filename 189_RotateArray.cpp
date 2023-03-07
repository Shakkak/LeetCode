class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <long long int> store;
        int size = nums.size();
        //if (size == 1) return;
        if  (k>=size) k = k%size;
        for (int i = size - k; i < size ;i++){
            store.push_back(nums[i]);
        }
        for (int i = size - k - 1, fill = size -1; i >= 0; i--,fill--){
            nums[fill] = nums [i];
        }
        int sizestore = store.size();
        for (int i = 0; i<sizestore; i++){
            nums[i] = store[i];
        }
    }
};
// another way is with flip