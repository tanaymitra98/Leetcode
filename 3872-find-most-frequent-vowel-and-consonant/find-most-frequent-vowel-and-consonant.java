class Solution {
    public int maxFreqSum(String s) {
        int freq[] = new int[26];//arr to store the frequency of all the characters
        int maxVowel =0;
        int maxConsonant = 0;

        s = s.toLowerCase();

        for(int i =0 ; i<s.length(); i++){
            int num = s.charAt(i) - 'a';
            freq[num]++;
            
            if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || 
            s.charAt(i) == 'u'){
                if(freq[num] > maxVowel){
                    maxVowel = freq[num];
                }
            }
            else{
                if(freq[num]> maxConsonant){
                    maxConsonant = freq[num];
                }
                
            }

        }

    return maxVowel + maxConsonant;
    }
}