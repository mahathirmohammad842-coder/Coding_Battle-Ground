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
int main(){
    Solution A;
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;
    int mid;

    vector<int> result = A.searchRange(nums, target);

    cout << result[mid-1]<<" "<< result[mid];




return 0;
}


