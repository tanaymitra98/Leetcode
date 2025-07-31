class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int s = 0;
        int e = n-1;

        while(s<=e){
            int mid = s+ (e-s)/2;

            int maxRow = 0;
            for(int i =0 ; i<m; i++){
                if(mat[i][mid] > mat[maxRow][mid]){
                    maxRow = i;
                }
            }
            int current = mat[maxRow][mid];
            int leftVal = (mid - 1 >= 0) ? mat[maxRow][mid - 1] : -1;
            int rightVal = (mid + 1 < n) ? mat[maxRow][mid + 1] : -1;
            if(current>leftVal && current > rightVal){
                return {maxRow,mid};
            }
            else if(leftVal > current){
                e = mid-1;
            }
            else{
                s = mid+1;
            }

        }
        return {-1,-1};
    }
};