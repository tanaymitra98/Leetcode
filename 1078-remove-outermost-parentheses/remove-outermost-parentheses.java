class Solution {
    public String removeOuterParentheses(String s) {
        ArrayList<Character> brackets = new ArrayList<>();

        for(int i =0 ; i<s.length() ; i++){
            brackets.add(s.charAt(i));
        }

        StringBuffer sb = new StringBuffer("");//append the desired result into this empty string
        int depth = 0;

        for(char ch : brackets){
            if(ch == '('){
                if(depth > 0){
                    sb.append(ch);
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                    sb.append(ch);
                }
            }
        }
        return sb.toString();
    }
}