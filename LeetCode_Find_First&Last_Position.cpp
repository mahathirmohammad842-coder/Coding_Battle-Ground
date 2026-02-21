#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int last = nums.size()-1;
        while(start<=last){
            int mid = (start+last)/2;
            if(nums[mid]==target){
                    if(nums[mid] == target) {

                            int l = mid, r = mid;
                    while(l > 0 && nums[l-1] == target) l--;
                    while(r < nums.size()-1 && nums[r+1] == target) r++;
                    return {l, r};
                    }

            }
            else if(target > nums[mid]){
                start = mid+1;
            }
            else{
                last = mid-1;
            }
        } return {-1,-1};

    }
};



