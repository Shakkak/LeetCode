// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int start = 0, end = n,minbad;
        while (start <= end){
            long long int mid = (start + end)/2;
            if (isBadVersion(mid)){
                minbad = mid;
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
    }
    return minbad;
    }
};