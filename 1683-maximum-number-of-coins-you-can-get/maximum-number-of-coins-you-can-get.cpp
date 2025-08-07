class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int sum =0;
        sort(piles.rbegin(), piles.rend());
        
        for(int i =1 ; i<n ; i+=2){
            if ((i / 2) >= piles.size() / 3) break; // stop after n picks
            sum += piles[i];
        }
        return sum;
    }
};