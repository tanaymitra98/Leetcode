class Solution {
public:
    string reversePrefix(string word, char ch) {
        int left = 0;
        int right= -1;

        for(int i =0 ; i<word.size();i++){
            if(word[i]==ch){
                right = i;//once the first occurence t=of the charavter ios found we exit the loop
                break;
            }
        }
        if(right == -1){//if the rtarget is not found we return the word
            return word;
        }
        while(left<right){//for swapping we are using the 
            swap(word[left],word[right]);
            left++;
            right--;
        }
        return word;

    }
};