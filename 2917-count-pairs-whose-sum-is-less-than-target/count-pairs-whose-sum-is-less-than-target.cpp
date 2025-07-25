class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int count =0;
        while(start<end){
            if(nums[start] + nums[end]<target){
                count+= start - end;
                start++;
            }
            else{
                end--;
            }
        }
        return abs(count);
    }
};