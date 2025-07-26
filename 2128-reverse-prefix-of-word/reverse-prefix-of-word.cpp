class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left = 0;
        int right= -1;

        for(int i =0 ; i<word.size();i++){
            if(word[i]==ch){
                right = i;
                break;
            }
        }
        if(right == -1){
            return word;
        }
        while(left<right){
            swap(word[left],word[right]);
            left++;
            right--;
        }
        return word;

    }
};