class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        int  n = nums.size();

        for(int i =0 ; i<=n/2 ; i++){
            vector<int> result;
            int min = *min_element(nums.begin(),nums.end());
            int max = *max_element(nums.begin(),nums.end());
            
            double avg  = (min + max)/2.0;
            averages.push_back(avg);

            nums.erase(find(nums.begin(), nums.end(), min));
            nums.erase(find(nums.begin(), nums.end(), max));

        }

        double min_avg = *min_element(averages.begin(),averages.end());
        return min_avg;
    }
};