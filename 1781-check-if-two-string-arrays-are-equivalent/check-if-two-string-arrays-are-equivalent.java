class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuffer sb1 = new StringBuffer();//making a blank for appending word1
        StringBuffer sb2 = new StringBuffer();//making a blank for appending word1

        for(int i =0 ; i<word1.length; i++){
            sb1.append(word1[i]);
        }

        for(int i =0 ; i<word2.length; i++){
            sb2.append(word2[i]);
        }

        if(sb1.toString().equals(sb2.toString())){
            return true;
        }

    return false;
    }
}