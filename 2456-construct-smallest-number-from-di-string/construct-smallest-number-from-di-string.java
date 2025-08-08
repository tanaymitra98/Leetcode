class Solution {
    public String smallestNumber(String pattern) {
        int n = pattern.length();

        ArrayList<Integer> list = new ArrayList<>();
        
        for(int i =1 ; i<=n+1 ; i++){
            list.add(i);//fill the array starting from 1 itself 
        }

        for(int i =0 ;i < n ; i++){
            if(pattern.charAt(i) == 'D'){
                int start = i;
                while(i<n && pattern.charAt(i) == 'D'){
                    i++;
                }
                int end = i;
                Collections.reverse(list.subList(start, end + 1));
            }
            
            
        }

        StringBuilder sb = new StringBuilder("");
        for(int digit : list){
            sb.append(digit);
        }
        return sb.toString();
        

    }
}