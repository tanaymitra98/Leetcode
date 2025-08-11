class Solution {
    public String truncateSentence(String s, int k) {
        String result[] = s.split( " " , k+1);
        StringBuffer sb = new StringBuffer();

        for(int i =0 ; i<k ; i++){
            sb.append(result[i] + " ");
        }
        
        return sb.toString().trim();
    }
}