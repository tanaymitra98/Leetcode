class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> result(n,0);

        for(int i =0 ;i<n; i++){
            int sum =0;
            for(int j =0 ;j<n; j++){
                if(boxes[j] == '1'){
                    sum += abs(i-j);
                }
            }
            result[i] = sum;
        }
        return result;
    }
};