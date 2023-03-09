#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(){
    vector<int> A = {2}, B = {1,3};
    int total = A.size() + B.size();
    int half = total / 2;

    if (B.size() < A.size()) {
        A.swap(B);
    }

    int l = 0, r = A.size() - 1;
    while (true) {
        int i = (l + r) / 2;
        int j = half - i - 2;
        cout<<"i:" << i <<" j:"<< j <<endl;
    
        int Aleft = (i >= 0) ? A[i] : INT_MIN;
        int Aright = (i + 1 < A.size()) ? A[i + 1] : INT_MAX;
        int Bleft = (j >= 0) ? B[j] : INT_MIN;
        int Bright = (j + 1 < B.size()) ? B[j + 1] : INT_MAX;
        cout << Aleft << " " << Aright << " " << Bleft << " " << Bright << " " << endl;

        if (Aleft <= Bright && Bleft <= Aright) {
            if (total % 2 == 1) {
                cout<< min(Aright, Bright);
                break;
            }else{
            return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
            break;
        }}
        else if (Aleft > Bright) {
            r = i - 1;
        }
        else {
            l = i + 1;
        }
    }
}