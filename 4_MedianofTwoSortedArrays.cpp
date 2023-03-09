#include <iostream>
#include <cmath>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    vector <int> nums1 = {12,15}; 
    vector <int> nums2 = {1,2,3,4,5,6,7,8,9};
    vector<int> A = nums1.size() < nums2.size() ? nums1 : nums2;
    vector<int> B = nums1.size() < nums2.size() ? nums2 : nums1;
    int totalsize = A.size() + B.size();
    int half = totalsize /2;
    int left = 0 , right = A.size() - 1;
    while (1){
        int midA = (left + right)/2;
        int midB = half - midA - 2;

        int leftA = midA >=0 ? A[midA] : numeric_limits<int>::min();
        int rightA = midA + 1 < A.size() ? A[midA + 1] : numeric_limits<int>::max();
        int leftB = midB >=0 ? B[midB] : numeric_limits<int>::min();
        int rightB = midB + 1 < B.size() ? B[midB + 1] : numeric_limits<int>::max();

        if (leftA <= rightB && leftB <= rightA){
            if (totalsize % 2){
                {cout << min(rightA,leftB);
                break;}
            }else {cout<< (max(leftA,leftB) + min(rightA,rightB))/2;
            break;}

        }else if (leftA > rightB){
            right = midA - 1 ;
        }else left = midA + 1;
    }
};

////


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> A = nums1.size() < nums2.size() ? nums1 : nums2;
    vector<int> B = nums1.size() < nums2.size() ? nums2 : nums1;
    int totalsize = A.size() + B.size();
    int half = totalsize /2;
    int left = 0 , right = A.size() - 1;
    while (true){
        int midA = (left + right)/2;
        int midB = half - midA - 2;

        int leftA = (midA >= 0) ? A[midA] : INT_MIN;
        int rightA = (midA + 1 < A.size()) ? A[midA + 1] : INT_MAX;
        int leftB = (midB >= 0) ? B[midB] : INT_MIN;
        int rightB = (midB + 1 < B.size()) ? B[midB + 1] : INT_MAX;

        if (leftA <= rightB && leftB <= rightA){
            if (totalsize % 2){
                return min(rightA,leftB);
            }else return (max(leftA,leftB) + min(rightA,rightB))/2;

        }else if (leftA > rightB){
            right = midA - 1 ;
        }else left = midA + 1;
    }
    }
};