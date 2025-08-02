class Solution {
private:
    void solve(vector<vector<int>> &result, vector<int> &ans, int index, vector<int> &nums ){
        //base case
        if(index >= nums.size()){
            result.push_back(ans);
            return;
        }
        //exclude case
        solve(result, ans, index+1, nums);

        //include case
        int element = nums[index];
        ans.push_back(element);
        solve(result,ans,index+1,nums);
        ans.pop_back(); // backtrack
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        int index = 0;
        solve(result,ans,index,nums);
        return result;
    }
};