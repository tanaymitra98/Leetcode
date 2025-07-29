bool isPalindrome(string &s, int left, int right){
    while(left<right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
        
    }
    return true;
}


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxlen = 1;
        int start =0;

        for(int i =0 ; i<n; i++){//starting index
            for(int j =i ; j<n; j++){//ending index
                if(isPalindrome(s,i,j) && (j-i+1)>maxlen){
                    start = i;
                    maxlen = (j-i+1);
                }
            }
        }
        return s.substr(start,maxlen);

        
    }
};