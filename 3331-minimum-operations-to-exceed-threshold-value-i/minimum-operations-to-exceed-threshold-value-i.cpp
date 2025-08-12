class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int s = 0, e = n - 1, ans = -1; 
        
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] >= k) {
                ans = mid; // first position where element >= k
                e = mid - 1; // search left to find earlier position
            } else {
                s = mid + 1; // search right
            }
        }
        
        return ans; // returns count of elements < k
    }
};

// EXPLANATION:
// - After sorting, if first element >= k is at index 'ans'
// - Then elements at indices 0, 1, 2, ..., ans-1 are all < k
// - So 'ans' gives us the COUNT of elements < k

// EXAMPLE with your test case:
// After sorting some elements: [..., 377260496 appears at index 13, ...]
// So elements at indices 0-12 are < 377260496
// Therefore answer = 13