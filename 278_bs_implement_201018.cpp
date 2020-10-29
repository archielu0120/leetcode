using namespace std

#include <iostream>

class Solution {
public:
	
    int firstBadVersion(int n) {
        int l = 1, r = n, res = 0;
        while(l <= r) {
            int mid = l + (r-l) / 2;
            bool isBad = isBadVersion(mid);
            
            if(!isBad) {
                l = mid + 1;
            }
            else {
                res = mid;
                r = mid - 1;
            }
        }
        return res;
    }
};
