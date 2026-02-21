#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

         int start = 0;
         int  last = nums.size()-1;

         while(start<=last){
        int mid = (start+last)/2;
        if(nums[mid]==target){

            return mid;
        }
        else if(target>nums[mid]){
            start = mid+1;
        }
        else{
            last = mid-1;
        }



    }return -1;
}
};
