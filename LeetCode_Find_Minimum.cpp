class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
         int  last = nums.size()-1;
         int mid;

         while(start<last){
        int mid = (start+last)/2;
        if(nums[mid]>nums[last]){
             start = mid+1;}
             else{
                last = mid;
             }

           }
    return nums[start]; }
};
