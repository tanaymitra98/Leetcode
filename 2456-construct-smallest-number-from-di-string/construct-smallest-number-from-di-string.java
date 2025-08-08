import java.util.*;

class Solution {
    public String smallestNumber(String pattern) {
        int n = pattern.length();

        // Step 1: Fill list with numbers 1 to n+1
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 1; i <= n + 1; i++) {
            list.add(i);
        }

        // Step 2: Reverse segments for consecutive 'D's
        int i = 0;
        while (i < n) {
            if (pattern.charAt(i) == 'D') {
                int start = i;
                while (i < n && pattern.charAt(i) == 'D') {
                    i++;
                }
                int end = i;
                Collections.reverse(list.subList(start, end + 1));
            } else {
                i++;
            }
        }

        // Step 3: Build the final string
        StringBuilder sb = new StringBuilder();
        for (int digit : list) {
            sb.append(digit);
        }
        return sb.toString();
    }
}