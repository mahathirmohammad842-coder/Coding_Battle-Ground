#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int last = nums.size()-1;

        while(start<=last){
            int mid= (start+last)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                last = mid-1;
            }
            else{
                start = mid+1;
            }

        }return start;
}

};
int main(){
    Solution A;

    vector<int> nums = {1,2,3,4,5};
    int target = 8;

    cout << A.search(nums, target);




return 0;
}

