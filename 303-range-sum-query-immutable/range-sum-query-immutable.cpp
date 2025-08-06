class NumArray {
private:
        vector<int> prefixSum;
public:
    NumArray(vector<int>& nums) {
        for(int i = 1 ; i<nums.size() ; i++){
            nums[i] += nums[i-1];

        }
        this->prefixSum = nums;
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return prefixSum[right];
        }

        return prefixSum[right] - prefixSum[left - 1];
    }
};
